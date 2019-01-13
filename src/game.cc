/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.cc                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alucas- <alucas-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:42 by alucas-           #+#    #+#             */
/*   Updated: 2019/01/13 12:02:11 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <game.h>
#include <cassert>

#include "game.h"
#include "player.h"
#include "collide.h"
#include "control.h"
#include "move.h"
#include "render.h"
#include "spawn.h"

Game::Entity::Entity() : x(), y(), type(), next(), frame(), kill() { }

Game::Entity::Entity(const Game::Entity &src)
	: x(), y(), type(), next(), frame(), kill() {
	*this = src;
}

Game::Entity::~Entity() { }

Game::Entity &Game::Entity::operator=(const Game::Entity &rhs) {
	this->x = rhs.x;
	this->y = rhs.y;
	this->type = rhs.type;
	this->next = rhs.next;
	this->frame = rhs.frame;
	return *this;
}

Game::Entity::Entity(int x, int y, Game::Type type)
	: x(x), y(y), type(type), next(nullptr), frame(0) { }

Game::Game() : _map(), _frame(0) {

	/* Init term with no delay, no cursor and keypad active */
	initscr();
	nodelay(stdscr, true);
	cbreak();
	keypad(stdscr, TRUE);
	curs_set(false);

	/* Add dome pretty colors */
	start_color();
	init_pair(1, COLOR_RED, COLOR_BLACK);
	init_pair(2, COLOR_MAGENTA, COLOR_BLACK);
	init_pair(3, COLOR_GREEN, COLOR_BLACK);
	init_pair(4, COLOR_CYAN, COLOR_BLACK);
	init_pair(5, COLOR_YELLOW, COLOR_BLACK);
	init_pair(6, COLOR_BLUE, COLOR_BLACK);

	/* Main window creation.. */
	_window = newwin(GAME_H, GAME_W, 0, 0);
}

Game::~Game() {

	/* Delete game window then tell ncurses to reset term */
	delwin(_window);
	endwin();
}

int Game::run() {
	Spawn spawner = Spawn(60);

	push(new Player(GAME_W / 2, GAME_H - 5, 10));

	for (int input; (input = getch()) != 27;) {

		/* Stop game loop */
		if (input == 'q' || input == KEY_EXIT) break;

		/* Yay, 60 fps */
		++this->_frame;
		std::chrono::steady_clock::time_point end =
			std::chrono::steady_clock::now() +
			std::chrono::milliseconds(8);

		werase(_window);

		spawner.spawn(*this);

		for (int y = 1; y < GAME_H - 1; ++y) {
			for (int x = 1; x < GAME_W - 1; ++x) {

				for (Entity *e = _map[x][y], *next; e; e = next) {
					next = e->next;

					/* Avoid to re-update game entity */
					if (e->frame == _frame) continue;
					e->frame = _frame;

					if (Control *c = dynamic_cast<Control *>(e))
						if (input > 0) c->control(*this, input);

					if (Move *m = dynamic_cast<Move *>(e))
						m->move(*this);

					if (e->kill) {
						pop(e);
						continue;
					}

					if (Spawn *s = dynamic_cast<Spawn *>(e))
						s->spawn(*this);

					if (Render *c = dynamic_cast<Render *>(e))
						c->render(*this);
				}
			}
		}

		box(_window, ACS_VLINE, ACS_HLINE);
		wrefresh(_window);
		std::this_thread::sleep_until(end);
	}

	return 0;
}

void Game::push(Entity *entity) {
	int x = entity->x, y = entity->y;

	assert(x < GAME_W && y < GAME_H && x >= 0 && y >= 0);

	Entity **it;

	if (Render *r = dynamic_cast<Render *>(entity)) {
		for (it = &_map[x][y]; *it; it = &(*it)->next)
			if (Render *rit = dynamic_cast<Render *>(*it))
				if (r->get_priority() <= (*rit).get_priority())
					break;
	} else it = &_map[x][y];

	entity->next = *it;
	*it = entity;
}

void Game::move(Entity *entity, int nx, int ny)
{
	int x = entity->x, y = entity->y;

	/* validate user input */
	if (nx >= GAME_W || ny >= GAME_H || nx < 0 || ny < 0)
		return (entity->kill = true), (void)0;

	assert(x < GAME_W && y < GAME_H && x >= 0 && y >= 0);

	entity->x = nx;
	entity->y = ny;

	/* Delete from linked list (previous position) */
	for (Entity **it = &_map[x][y]; *it; it = &(*it)->next)
		if (*it == entity) {
			*it = entity->next;
			break;
		}

	/* Insert at new position and set set new position */
	push(entity);

	if (Collide *cl = dynamic_cast<Collide *>(entity))
		cl->collide(*this);
}

void Game::pop(Entity *entity) {
	int x = entity->x, y = entity->y;

	assert(x < GAME_W && y < GAME_H && x >= 0 && y >= 0);

	for (Entity **it = &_map[x][y]; *it; it = &(*it)->next)
		if (*it == entity) {
			*it = entity->next;
			break;
		}

	delete entity;
}

Game::Entity *Game::get(int x, int y) {
	if (x >= GAME_W || y >= GAME_H || x < 0 || y < 0)
		return NULL;
	return _map[x][y];
}

uint64_t Game::get_frame() const {
	return this->_frame;
}

WINDOW *Game::get_window() const {
	return _window;
}

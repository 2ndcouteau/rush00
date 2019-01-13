/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alucas- <alucas-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:42 by alucas-           #+#    #+#             */
/*   Updated: 1970/01/01 00:00:42 by alucas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <control.h>
#include "game.h"
#include "entity.h"
#include "collide.h"
#include "move.h"

Game::Game() : _map(), _frame(0) {

	/* Init term with no delay, no cursor and keypad active */
	initscr();
	nodelay(stdscr, true);
	cbreak();
	keypad(stdscr, TRUE);
	curs_set(false);

	std::cout << "LOL1\n";

	/* Add dome pretty colors */
	start_color();
	init_pair(1, COLOR_RED, COLOR_BLACK);
	init_pair(2, COLOR_MAGENTA, COLOR_BLACK);
	init_pair(3, COLOR_GREEN, COLOR_BLACK);
	init_pair(4, COLOR_CYAN, COLOR_BLACK);
	init_pair(5, COLOR_YELLOW, COLOR_BLACK);

	std::cout << "LOL2\n";

	/* Main window creation.. */
	_game = newwin(GAME_H, GAME_W, 0, 0);
	box(_game, ACS_VLINE, ACS_HLINE);
}

Game::~Game() {

	/* Delete game window then tell ncurses to reset term */
	delwin(_game);
	endwin();
}

int Game::run() {
	for (int input; (input = getch()) != 27;) {

		/* Stop game loop */
		if (input == 'q' || input == KEY_EXIT) break;

		/* Yay, 60 fps */
		++this->_frame;
		std::chrono::steady_clock::time_point end =
			std::chrono::steady_clock::now() +
			std::chrono::milliseconds(16);

		for (int i = 0; i < GAME_H; ++i) {
			for (int j = 0; j < GAME_W; ++j) {
				Collide::collide(*this, i, j);

				for (Entity *e = _map[i][j]; e; e = e->next) {

					if (Control *c = dynamic_cast<Control *>(e)) {
						/* TODO: Do control */
					}

					if (Move *m = dynamic_cast<Move *>(e)) {
						/* TODO: Do move */
					}

				}
			}
		}

		wrefresh(_game);

		std::this_thread::sleep_until(end);
	}

	return 0;
}

void Game::push(Entity &e) {
	int x = e.get_x(), y = e.get_y();

	if (x >= GAME_W || y >= GAME_H || x < 0 || y < 0)
		return;

	e.next = _map[x][y];
	_map[x][y] = new Entity(e);
}

void Game::pop(Entity *entity) {
	int x = entity->get_x(), y = entity->get_y();

	/* Delete from linked list */
	if (x < GAME_W && y < GAME_H && x >= 0 && y >= 0)
		for (Entity **it = &_map[x][y]; *it; it = &(*it)->next)
			if (*it == entity) {
				*it = entity->next;
				break;
			}

	delete entity;
}

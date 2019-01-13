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

#ifndef __GAME_H
# define __GAME_H

#include <time.h>
#include <ncurses.h>

#include <cstdlib>
#include <chrono>
#include <thread>
#include <iostream>

#define GAME_H (25)
#define GAME_W (25)

class Entity;

class Game {
public:

private:
	Entity *_map[GAME_H][GAME_W];
	uint64_t _frame;
	WINDOW *_game;

public:
	Game();
	virtual ~Game();

	int run();

	void push(Entity *entity);
	void pop(Entity *entity);
};

#endif /* !__GAME_H */

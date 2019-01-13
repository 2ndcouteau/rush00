/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   laser.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 09:34:36 by qrosa             #+#    #+#             */
/*   Updated: 2019/01/13 09:35:28 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ncurses.h>

#include "laser.h"

Laser::Laser()
{
//	std::cout << " Laser Default Constructor " << std::endl;
	return;
}

Laser::Laser(Laser const &src)
{
//	std::cout << " Laser Copy Constructor " << std::endl;
	*this = src;
	return;
}

Laser::~Laser()
{
//	std::cout << " Laser Destructor " << std::endl;
	return;
}

Laser &	Laser::operator=(Laser const &rhs)
{
//	std::cout << " Laser Assignement Operator " << std::endl;

//	if (this != &rhs)
//		this->_foo = rhs.getFoo();

	return *this;
}

Laser::Laser(int x, int y, Game::Type type, char visual, int color)
	: Entity(x, y, type), Collide(1), Move(20, Move::Up),
	  Render(type == Game::GOOD ? PLAYER : ENEMY),
	_visual(visual), _color(color) {

	if (type == Game::BAD)
		Move::_direction = Down;
}

void Laser::render(Game &game) {
	wattron(game.get_window(), COLOR_PAIR(_color));
	mvwprintw(game.get_window(), y, x, (char[]){ _visual, '\0' });
	wattroff(game.get_window(), COLOR_PAIR(_color));
}

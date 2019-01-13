/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 09:40:54 by qrosa             #+#    #+#             */
/*   Updated: 2019/01/13 09:52:27 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cassert>

#include "move.h"

Move::Move()
{
	// std::cout << " Move Default Constructor " << std::endl;
	return;
}

Move::Move(Move const &src)
{
	// std::cout << " Move Copy Constructor " << std::endl;
	*this = src;
	return;
}

Move::~Move()
{
	// std::cout << " Move Destructor " << std::endl;
	return;
}

Move &	Move::operator=(Move const &rhs)
{
	// std::cout << " Move Assignement Operator " << std::endl;

//	if (this != &rhs)
//		this->_foo = rhs.getFoo();

	return *this;
}

void Move::move(Game &game) {
	Game::Entity *e = dynamic_cast<Game::Entity *>(this);

	assert(e);
	if ((game.get_frame() % _frequency) == 0)
		switch (_direction) {
		default:
			break;
		case Left:
			game.move(e, e->x - 1, e->y);
			break;
		case Right:
			game.move(e, e->x + 1, e->y);
			break;
		case Up:
			game.move(e, e->x, e->y - 1);
			break;
		case Down:
			game.move(e, e->x, e->y + 1);
			break;
		}
}

Move::Move(uint64_t frequency, Move::Direction direction)
	: _frequency(frequency), _direction(direction) { }


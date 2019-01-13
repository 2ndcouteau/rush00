/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 10:02:56 by qrosa             #+#    #+#             */
/*   Updated: 2019/01/13 10:03:04 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <player.h>

#include "player.h"

Player::Player()
{
//	std::cout << " Player Default Constructor " << std::endl;
	return;
}

Player::Player(Player const &src)
{
//	std::cout << " Player Copy Constructor " << std::endl;
	*this = src;
	return;
}

Player::~Player()
{
//	std::cout << " Player Destructor " << std::endl;
	return;
}

Player &	Player::operator=(Player const &rhs)
{
//	std::cout << " Player Assignement Operator " << std::endl;

//	if (this != &rhs)
//		this->_foo = rhs.getFoo();

	return *this;
}

Player::Player(int x, int y, size_t hp)
	: Entity(x, y, Game::GOOD), Collide(hp), Render(Render::PLAYER) { }

void Player::control(Game &game, int input) {
	switch (input) {
	case KEY_LEFT:
		game.move(this, x - 1, y);
		break;
	case KEY_RIGHT:
		game.move(this, x + 1, y);
		break;
	case KEY_UP:
		game.move(this, x, y - 1);
		break;
	case KEY_DOWN:
		game.move(this, x, y + 1);
		break;
	case ' ':
		game.push();
		executor.push(new Laser(getPosX(), getPosY() - 1));
		break;
	default:
		break;
	}
}

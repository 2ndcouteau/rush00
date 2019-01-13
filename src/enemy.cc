/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemy.cc                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 10:03:23 by qrosa             #+#    #+#             */
/*   Updated: 2019/01/13 15:15:18 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <laser.h>
#include "enemy.h"

Enemy::Enemy()
{
//	std::cout << " Enemy Default Constructor " << std::endl;
	return;
}

Enemy::Enemy(Enemy const &src)
{
//	std::cout << " Enemy Copy Constructor " << std::endl;
	*this = src;
	return;
}

Enemy::~Enemy()
{
//	std::cout << " Enemy Destructor " << std::endl;
	return;
}

Enemy &	Enemy::operator=(Enemy const &rhs)
{
//	std::cout << " Enemy Assignement Operator " << std::endl;

//	if (this != &rhs)
//		this->_foo = rhs.getFoo();

	return *this;
}

Enemy::Enemy(int x, int y, size_t hp)
	: Entity(x, y, Game::BAD), Collide(hp), Move(40, Down),
	  Spawn(120), Render(Render::ENEMY) { }

void Enemy::spawn(Game &game) {
	if ((game.get_frame() % Spawn::_frequency) == 0)			// 1 chance sur 4 // 4:12
		game.push(new Laser(x, y, Game::BAD, 'T', 6));
}

void Enemy::render(Game &game) {
	wattron(game.get_window(), COLOR_PAIR(4));
	mvwprintw(game.get_window(), y, x, "W");
	wattroff(game.get_window(), COLOR_PAIR(4));
}

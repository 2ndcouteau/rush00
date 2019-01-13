/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemy.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 10:03:23 by qrosa             #+#    #+#             */
/*   Updated: 2019/01/13 10:10:06 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"


Enemy::Enemy(void)
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

Enemy::~Enemy(void)
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

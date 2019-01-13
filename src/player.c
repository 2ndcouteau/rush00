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

#include "Player.hpp"


Player::Player(void) 
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

Player::~Player(void)
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

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

#include <move.h>

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

void Move::move(Game &) {

}


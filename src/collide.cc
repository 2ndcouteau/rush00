/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collide.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 09:34:36 by qrosa             #+#    #+#             */
/*   Updated: 2019/01/13 09:35:28 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <collide.h>

#include "collide.h"

Collide::Collide()
{
//	std::cout << " Collide Default Constructor " << std::endl;
	return;
}

Collide::Collide(Collide const &src)
{
//	std::cout << " Collide Copy Constructor " << std::endl;
	*this = src;
	return;
}

Collide::~Collide()
{
//	std::cout << " Collide Destructor " << std::endl;
	return;
}

Collide &	Collide::operator=(Collide const &rhs)
{
//	std::cout << " Collide Assignement Operator " << std::endl;

//	if (this != &rhs)
//		this->_foo = rhs.getFoo();

	return *this;
}

void Collide::collide(Game &) {

}

Collide::Collide(size_t hp, uint8_t hitbox) : _hp(hp), _hitbox(hitbox) { }

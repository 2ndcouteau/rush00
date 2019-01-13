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

#include "Collide.hpp"


Collide::Collide(void) 
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

Collide::~Collide(void)
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

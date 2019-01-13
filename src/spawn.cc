/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spawn.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 09:45:21 by qrosa             #+#    #+#             */
/*   Updated: 2019/01/13 09:45:31 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Spawn.hpp"


Spawn::Spawn(void) 
{
//	std::cout << " Spawn Default Constructor " << std::endl;
	return;
}

Spawn::Spawn(Spawn const &src)
{
//	std::cout << " Spawn Copy Constructor " << std::endl;
	*this = src;
	return;
}

Spawn::~Spawn(void)
{
//	std::cout << " Spawn Destructor " << std::endl;
	return;
}

Spawn &	Spawn::operator=(Spawn const &rhs)
{
//	std::cout << " Spawn Assignement Operator " << std::endl;

//	if (this != &rhs)
//		this->_foo = rhs.getFoo();

	return *this;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   environnement.cc                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 15:24:13 by qrosa             #+#    #+#             */
/*   Updated: 2019/01/13 15:34:40 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Environnement.h"

Environnement::Environnement(void)
{
//	std::cout << " Environnement Default Constructor " << std::endl;
	return;
}

Environnement::Environnement(Environnement const &src)
{
//	std::cout << " Environnement Copy Constructor " << std::endl;
	*this = src;
	return;
}

Environnement::~Environnement(void)
{
//	std::cout << " Environnement Destructor " << std::endl;
	return;
}

Environnement &	Environnement::operator=(Environnement const &rhs)
{
//	std::cout << " Environnement Assignement Operator " << std::endl;

//	if (this != &rhs)
//		this->_foo = rhs.getFoo();

	return *this;
}

Environnement::Environnement(int x, int y, size_t hp)
	: Entity(x, y, Game::BAD), Collide(hp), Render(Render::ENV) { }

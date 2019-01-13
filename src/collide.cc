/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collide.cc                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 09:34:36 by qrosa             #+#    #+#             */
/*   Updated: 2019/01/13 14:58:30 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <collide.h>
#include <cassert>

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

Collide::Collide(size_t hp) : _hp(hp) { }


void Collide::collide(Game &game) {
	Game::Entity *e = dynamic_cast<Game::Entity *>(this);

	assert(e);
	for (Game::Entity *it = game.get(e->x, e->y); it; it = it->next)
		if (it != e && it->type != e->type)
			if (Collide *cl = dynamic_cast<Collide *>(e)) {
				_hp -= 1;
				if (_hp == 0)
					e->kill = true;
				cl->_hp -= 1;
				if (cl->_hp == 0)
					dynamic_cast<Game::Entity *>(cl)->kill = true;
			}
}

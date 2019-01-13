/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   entity.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 09:40:07 by qrosa             #+#    #+#             */
/*   Updated: 2019/01/13 10:02:01 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <entity.h>


Entity::Entity(void)
{
//	std::cout << " Entity Default Constructor " << std::endl;
	return;
}

Entity::Entity(Entity const &src)
{
//	std::cout << " Entity Copy Constructor " << std::endl;
	*this = src;
	return;
}

Entity::~Entity(void)
{
//	std::cout << " Entity Destructor " << std::endl;
	return;
}

Entity &	Entity::operator=(Entity const &rhs)
{
//	std::cout << " Entity Assignement Operator " << std::endl;

//	if (this != &rhs)
//		this->_foo = rhs.getFoo();

	return *this;
}



// GET SET
int Entity::get_x() const {
	return _x;
}

int Entity::get_y() const {
	return _y;
}

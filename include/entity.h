/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   entity.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 09:40:26 by qrosa             #+#    #+#             */
/*   Updated: 2019/01/13 10:01:13 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENTITY_CLASS_HPP
# define ENTITY_CLASS_HPP

#include <iostream>

enum Type
{
	GOOD,
	BAD
};

class Entity
{
private:

protected:
	Type			_type;
	std::size_t		_x;
	std::size_t		_y;

public:
	Entity *next;

	Entity(void);
	Entity(Entity const &src);
	virtual ~Entity(void);

	Entity &	operator=(Entity const &rhs);

	size_t get_x() const;
	size_t get_y() const;
};

//std::ostream &	operator<<(std::ostream &o, Entity const &rhs);

#endif

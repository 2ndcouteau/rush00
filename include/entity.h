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
	Type	_type;
	int		_x;
	int		_y;

public:
	Entity *next;

	Entity(void);
	Entity(Entity const &src);
	virtual ~Entity(void);

	Entity &	operator=(Entity const &rhs);

	int get_x() const;
	int get_y() const;
};

//std::ostream &	operator<<(std::ostream &o, Entity const &rhs);

#endif

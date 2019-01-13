/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collide.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 09:35:34 by qrosa             #+#    #+#             */
/*   Updated: 2019/01/13 12:05:09 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLLIDE_CLASS_HPP
# define COLLIDE_CLASS_HPP

#include <iostream>

class Collide
{
	private:

	protected:
		std::size_t		_hp;

	public:
		Collide(void);
		Collide(Collide const &src);
		~Collide(void);

		Collide &	operator=(Collide const &rhs);

		void collide(Game &);
			// check collision and delete entity
};

//std::ostream &	operator<<(std::ostream &o, Collide const &rhs);

#endif

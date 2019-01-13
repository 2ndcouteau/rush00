/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 09:41:19 by qrosa             #+#    #+#             */
/*   Updated: 2019/01/13 12:04:02 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOVE_CLASS_HPP
# define MOVE_CLASS_HPP

#include <iostream>
#include "game.h"

class Move
{
	private:

	protected:
		int		_speed;
		int		_direction;

	public:
		Move(void);
		Move(Move const &src);
		~Move(void);

		Move &	operator=(Move const &rhs);


		void move(Game &);

		int	getSpeed() const;
		int	getDirection() const;
};

//std::ostream &	operator<<(std::ostream &o, Move const &rhs);

#endif

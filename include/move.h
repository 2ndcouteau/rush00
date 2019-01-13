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

#ifndef __MOVE_H
# define __MOVE_H

#include "game.h"

class Move {
public:
	enum Direction { Left, Right, Up, Down };

private:
	uint64_t _speed;
	Direction _direction;

public:
	Move(uint64_t _speed, Direction _direction);

	Move();
	Move(Move const &src);
	~Move();

	Move &operator=(Move const &rhs);

	void move(Game &);
};

#endif /* !__MOVE_H */

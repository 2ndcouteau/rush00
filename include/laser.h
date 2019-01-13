/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Laser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 10:03:06 by qrosa             #+#    #+#             */
/*   Updated: 2019/01/13 10:06:34 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __LASER_H
# define __LASER_H

#include "collide.h"
#include "control.h"
#include "render.h"

class Laser : public Game::Entity,
	public Collide, public Move, public Render {
private:
	char _visuel;
	int _color;

public:
	Laser(int x, int y, char visuel, int color);

	Laser();
	Laser(Laser const &src);
	~Laser();

	Laser &operator=(Laser const &rhs);

	void control(Game &game, int input) override;
};

#endif /* !__LASER_H */

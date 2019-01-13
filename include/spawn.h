/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spawn.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 09:45:33 by qrosa             #+#    #+#             */
/*   Updated: 2019/01/13 12:04:41 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAWN_H
# define __SPAWN_H

#include "game.h"

class Spawn {
public:
	Spawn();
	Spawn(Spawn const &src);
	~Spawn();

	Spawn &operator=(Spawn const &rhs);

	void spwan(Game &);
};

#endif /* !__SPAWN_H */

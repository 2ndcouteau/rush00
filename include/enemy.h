/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemy.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 10:03:44 by qrosa             #+#    #+#             */
/*   Updated: 2019/01/13 10:07:21 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_CLASS_HPP
# define ENEMY_CLASS_HPP

#include "collide.h"
#include "move.h"
#include "spawn.h"
#include "render.h"

class Enemy : public Game::Entity,
	public Collide, public Move, public Spawn, public Render {
public:
	Enemy();
	Enemy(Enemy const &src);
	~Enemy();

	Enemy &operator=(Enemy const &rhs);
};

#endif

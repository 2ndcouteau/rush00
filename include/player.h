/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 10:03:06 by qrosa             #+#    #+#             */
/*   Updated: 2019/01/13 10:06:34 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_CLASS_HPP
# define PLAYER_CLASS_HPP

#include "collide.h"
#include "control.h"
#include "render.h"

class Player : public Game::Entity,
	public Collide, public Control, public Render {
public:
	Player(int x, int y, size_t hp);

	Player();
	Player(Player const &src);
	~Player();

	Player &operator=(Player const &rhs);

	void control(Game &game, int input) override;
};

#endif

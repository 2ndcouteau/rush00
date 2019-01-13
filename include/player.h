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

#include <iostream>

class Player : public Collide, public Move, public Render, public Collide
{
	private:

	protected:


	public:
		Player(void);
		Player(Player const &src);
		~Player(void);

		Player &	operator=(Player const &rhs);

};

//std::ostream &	operator<<(std::ostream &o, Player const &rhs);

#endif

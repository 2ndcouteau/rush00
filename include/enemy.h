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

#include <iostream>

class Enemy : public Collide, public Move, public Spawn, public Render, public Collide
{
	private:

	protected:


	public:
		Enemy(void);
		Enemy(Enemy const &src);
		~Enemy(void);

		Enemy &	operator=(Enemy const &rhs);

};

//std::ostream &	operator<<(std::ostream &o, Enemy const &rhs);

#endif

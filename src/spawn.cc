/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spawn.cc                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 09:45:21 by qrosa             #+#    #+#             */
/*   Updated: 2019/01/13 15:41:07 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "spawn.h"
#include "enemy.h"
#include "laser.h"
#include "environnement.h"

Spawn::Spawn()
{
//	std::cout << " Spawn Default Constructor " << std::endl;
	return;
}

Spawn::Spawn(Spawn const &src)
{
//	std::cout << " Spawn Copy Constructor " << std::endl;
	*this = src;
	return;
}

Spawn::~Spawn()
{
//	std::cout << " Spawn Destructor " << std::endl;
	return;
}

Spawn &	Spawn::operator=(Spawn const &rhs)
{
//	std::cout << " Spawn Assignement Operator " << std::endl;

//	if (this != &rhs)
//		this->_foo = rhs.getFoo();

	return *this;
}

void Spawn::spawn(Game & game) {
	if ((game.get_frame() % _frequency) == 0)	// 1 chance sur 4 // 4:12
	{
		game.push(new Enemy((rand() % GAME_W), 1, 1));
		//		switch (rand() % 1) {
//			case 0:
//				game.push(new Enemy((rand() % GAME_W), 1, 1));
//			case 1:
//				game.push(new Environnement((rand() % GAME_W), 1, 1));
//		}
	}
}

Spawn::Spawn(uint64_t _frequency) : _frequency(_frequency) { }

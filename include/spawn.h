/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spawn.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 09:45:33 by qrosa             #+#    #+#             */
/*   Updated: 2019/01/13 09:48:59 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAWN_CLASS_HPP
# define SPAWN_CLASS_HPP

#include <iostream>

class Spawn
{
	private:

	protected:

	public:
		Spawn(void);
		Spawn(Spawn const &src);
		~Spawn(void);

		Spawn &	operator=(Spawn const &rhs);

//		Enemy*	generate_enemies();
};

//std::ostream &	operator<<(std::ostream &o, Spawn const &rhs);

#endif

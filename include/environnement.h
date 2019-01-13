/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   environnement.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 15:24:09 by qrosa             #+#    #+#             */
/*   Updated: 2019/01/13 15:34:04 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENVIRONNEMENT_CLASS_HPP
# define ENVIRONNEMENT_CLASS_HPP

#include <iostream>

class Environnement : public Game::Entity,
	public Collide, public Move, public Render
{
	private:

	protected:
		Environnement(void);

	public:
		Enemy(int hp, std::string const & type);
		Environnement(Environnement const &src);
		~Environnement(void);

		virtual ~Enemy(void);

		virtual void takeDamage(int);


		Environnement &	operator=(Environnement const &rhs);

};

//std::ostream &	operator<<(std::ostream &o, Environnement const &rhs);

#endif

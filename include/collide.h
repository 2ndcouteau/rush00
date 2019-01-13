/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collide.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 09:35:34 by qrosa             #+#    #+#             */
/*   Updated: 2019/01/13 12:05:09 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __COLLIDE_H
# define __COLLIDE_H

#include "game.h"

class Collide {
private:
	std::size_t _hp;

public:
	Collide(size_t hp);

	Collide();
	Collide(Collide const &src);
	~Collide();

	Collide &operator=(Collide const &rhs);

	void collide(Game &);
};

#endif /* !__COLLIDE_H */

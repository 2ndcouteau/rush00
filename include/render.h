/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 09:45:08 by qrosa             #+#    #+#             */
/*   Updated: 2019/01/13 11:53:21 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __RENDER_H
# define __RENDER_H

#include "game.h"

class Render {
protected:
	enum Priority { PLAYER, ENEMY, ENV };

private:
	Priority _priority;

public:
	Render(Priority _priority);

	Render();
	Render(Render const &src);
	~Render();

	Render &operator=(Render const &rhs);

	void render(Game &);
};

#endif /* !__RENDER_H */

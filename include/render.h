/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 09:45:08 by qrosa             #+#    #+#             */
/*   Updated: 2019/01/13 09:50:22 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RENDER_CLASS_HPP
# define RENDER_CLASS_HPP

#include <iostream>

class Render
{
	private:

	protected:


	public:
		Render(void);
		Render(Render const &src);
		~Render(void);

		Render &	operator=(Render const &rhs);

//		void	draw_map(Game *);

};

//std::ostream &	operator<<(std::ostream &o, Render const &rhs);

#endif

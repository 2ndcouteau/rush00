/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 09:37:02 by qrosa             #+#    #+#             */
/*   Updated: 2019/01/13 09:38:22 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTROL_CLASS_HPP
# define CONTROL_CLASS_HPP

#include <iostream>

class Control
{
	private:

	protected:


	public:
		Control(void);
		Control(Control const &src);
		~Control(void);

		Control &	operator=(Control const &rhs);

//		get_control(char input);
};

//std::ostream &	operator<<(std::ostream &o, Control const &rhs);

#endif

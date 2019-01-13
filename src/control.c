/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 09:36:33 by qrosa             #+#    #+#             */
/*   Updated: 2019/01/13 09:36:41 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Control.hpp"


Control::Control(void) 
{
//	std::cout << " Control Default Constructor " << std::endl;
	return;
}

Control::Control(Control const &src)
{
//	std::cout << " Control Copy Constructor " << std::endl;
	*this = src;
	return;
}

Control::~Control(void)
{
//	std::cout << " Control Destructor " << std::endl;
	return;
}

Control &	Control::operator=(Control const &rhs)
{
//	std::cout << " Control Assignement Operator " << std::endl;

//	if (this != &rhs)
//		this->_foo = rhs.getFoo();

	return *this;
}

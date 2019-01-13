/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 09:44:57 by qrosa             #+#    #+#             */
/*   Updated: 2019/01/13 09:45:06 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Render.hpp"


Render::Render(void) 
{
//	std::cout << " Render Default Constructor " << std::endl;
	return;
}

Render::Render(Render const &src)
{
//	std::cout << " Render Copy Constructor " << std::endl;
	*this = src;
	return;
}

Render::~Render(void)
{
//	std::cout << " Render Destructor " << std::endl;
	return;
}

Render &	Render::operator=(Render const &rhs)
{
//	std::cout << " Render Assignement Operator " << std::endl;

//	if (this != &rhs)
//		this->_foo = rhs.getFoo();

	return *this;
}
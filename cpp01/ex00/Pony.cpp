/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 14:36:11 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/08 14:57:51 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, std::string color)
{
	this->name = name;
	this->color = color;
}

Pony::~Pony()
{
	std::cout << this->name << " said: \"Byee!\"" << std::endl;
}

void	Pony::say_hello()
{
	std::cout << "Hello! My name is: " << this->name << "! I am very beautiful "
	<< this->color << " color!" << std::endl;
}
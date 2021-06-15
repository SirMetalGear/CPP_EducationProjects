/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 12:11:15 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/19 15:14:34 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(const std::string &name) : Victim(name)
{
	std::cout << "Zog zog.\n";
}

Peon::Peon() : Victim()
{
	std::cout << "Peon default constructor has been called\n";
}

Peon::~Peon()
{
	std::cout << "Bleuark...\n";
}

Peon::Peon(const Peon &obj)
{
	std::cout << "Copy constructor of Peon class has been called" << std::endl;
	*this = obj;
}

void Peon::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a pink pony!\n";
}

Peon &Peon::operator = (const Peon &obj)
{
	if (&obj == this)
		return *this;
	this->name = obj.name;
	return *this;
}

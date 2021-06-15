/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bart.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 15:45:27 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/19 15:47:46 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bart.hpp"

Bart::Bart(const std::string &name) : Victim(name)
{
	std::cout << "Eat my shorts.\n";
}

Bart::Bart() : Victim()
{
	std::cout << "Bart default constructor has been called\n";
}

Bart::~Bart()
{
	std::cout << "D'oh!\n";
}

Bart::Bart(const Bart &obj)
{
	std::cout << "Copy constructor of Bart class has been called" << std::endl;
	*this = obj;
}

void Bart::getPolymorphed() const
{
	std::cout << this->name << " has been turned grown Homer Simpson! Really D'OH, man.\n";
}

Bart &Bart::operator = (const Bart &obj)
{
	if (&obj == this)
		return *this;
	this->name = obj.name;
	return *this;
}

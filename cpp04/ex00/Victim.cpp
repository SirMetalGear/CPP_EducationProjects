/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 12:10:55 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/19 15:44:10 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(const std::string &name) : name(name)
{
	std::cout << "Some random victim called " << this->name << " just appeared!\n";
}

Victim::Victim()
{
	std::cout << "Victim default constructor has been called\n";
}

Victim::~Victim()
{
	std::cout << "Victim " << this->name << " just died for no apparent reason!\n";
}

Victim::Victim(const Victim &obj)
{
	std::cout << "Copy constructor of Victim class has been called" << std::endl;
	*this = obj;
}

const std::string	Victim::introduce()
{
	std::string str;
	str = "I am " + this->name + " and I like otters!";
	return (str);
}

void Victim::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a cute little sheep!\n";
}

Victim &Victim::operator = (const Victim &obj)
{
	if (&obj == this)
		return *this;
	this->name = obj.name;
	return *this;
}

std::ostream &operator << (std::ostream &out, Victim &obj)
{
	out << obj.introduce() << std::endl;
	return (out);
}

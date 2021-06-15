/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 12:11:04 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/19 15:12:06 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(const std::string &name, const std::string &title) : name(name), title(title)
{
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer()
{
	std::cout << "Sorcerer default constructor has been called\n";
}

Sorcerer::~Sorcerer()
{
	std::cout << this->name << ", " << this->title <<
	", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &obj)
{
	std::cout << "Copy constructor of Sorcerer class has been called" << std::endl;
	*this = obj;
}

Sorcerer &Sorcerer::operator = (const Sorcerer &obj)
{
	if (&obj == this)
		return *this;
	this->name = obj.name;
	this->title = obj.title;
	return *this;
}

const std::string	Sorcerer::introduce()
{
	std::string str;
	str = "I am " + this->name + ", " + this->title + ", and I like ponies!";
	return (str);
}

void Sorcerer::polymorph(Victim const &obj) const
{
	obj.getPolymorphed();
}

std::ostream &operator << (std::ostream &out, Sorcerer &obj)
{
	out << obj.introduce() << std::endl;
	return (out);
}
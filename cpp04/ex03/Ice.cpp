/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 20:16:54 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/21 12:14:52 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(std::string const & type) : AMateria(type)
{}

Ice::Ice() : AMateria("ice")
{}

Ice::~Ice()
{}

Ice::Ice(const Ice &obj)
{
	*this = obj;
}

Ice &Ice::operator = (const Ice &obj)
{
	if (&obj == this)
		return *this;
	this->_xp = obj._xp;
	this->_type = obj._type;
	return *this;
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
	_xp = _xp + 10;
}

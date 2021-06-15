/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 20:42:52 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/21 12:15:34 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(std::string const & type) : AMateria(type)
{}

Cure::Cure() : AMateria("cure")
{}

Cure::~Cure()
{}

Cure::Cure(const Cure &obj)
{
	*this = obj;
}

Cure &Cure::operator = (const Cure &obj)
{
	if (&obj == this)
		return *this;
	this->_xp = obj._xp;
	this->_type = obj._type;
	return *this;
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds*\n";
	_xp = _xp + 10;
}

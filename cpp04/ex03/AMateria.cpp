/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 19:58:54 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/21 14:15:59 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _xp (0), _type(type)
{}

AMateria::AMateria()
{
	// std::cout << "Default constructor of AMateria has been called\n";
}

AMateria::~AMateria()
{
	// std::cout << "Default destructor of AMateria has been called\n";
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

unsigned int AMateria::getXP() const
{
	return (this->_xp);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	_xp = _xp + 10;
}

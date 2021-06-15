/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ChainSawMagic.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 12:22:01 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/21 12:23:04 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ChainsawMagic.hpp"

ChainsawMagic::ChainsawMagic(std::string const & type) : AMateria(type)
{}

ChainsawMagic::ChainsawMagic() : AMateria("chainsaw_magic")
{}

ChainsawMagic::~ChainsawMagic()
{}

ChainsawMagic::ChainsawMagic(const ChainsawMagic &obj)
{
	*this = obj;
}

ChainsawMagic &ChainsawMagic::operator = (const ChainsawMagic &obj)
{
	if (&obj == this)
		return *this;
	this->_xp = obj._xp;
	this->_type = obj._type;
	return *this;
}

AMateria* ChainsawMagic::clone() const
{
	return (new ChainsawMagic(*this));
}

void ChainsawMagic::use(ICharacter& target)
{
	std::cout << "* " << target.getName() << " feeling chainsaw magic for now*\n";
	_xp = _xp + 10;
}

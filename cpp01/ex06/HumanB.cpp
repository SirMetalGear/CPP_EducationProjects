/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 12:44:19 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/12 19:35:21 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{}

HumanB::~HumanB()
{}

void	HumanB::attack()
{
	std::cout << this->_name << " attacks with his "
	<< this->_weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &club)
{
	this->_weapon = &club;
}

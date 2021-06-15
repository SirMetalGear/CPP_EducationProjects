/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 18:56:33 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/22 10:15:44 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{}

PowerFist::~PowerFist()
{}

PowerFist::PowerFist(const PowerFist &obj) : AWeapon("", 0, 0)
{
	*this = obj;
}

PowerFist &PowerFist::operator = (const PowerFist &obj)
{
	if (&obj == this)
		return *this;
	this->name = obj.name;
	this->apCost = obj.apCost;
	this->damage = obj.damage;
	return *this;
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

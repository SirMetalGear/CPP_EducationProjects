/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:13:50 by mlorette          #+#    #+#             */
/*   Updated: 2021/05/09 10:40:28 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{}

PlasmaRifle::~PlasmaRifle()
{}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &obj) : AWeapon("", 0, 0)
{
	*this = obj;
}

PlasmaRifle &PlasmaRifle::operator = (const PlasmaRifle &obj)
{
	if (&obj == this)
		return *this;
	this->name = obj.name;
	this->apCost = obj.apCost;
	this->damage = obj.damage;
	return *this;
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

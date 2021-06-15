/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 15:59:00 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/19 16:34:59 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
: name(name), apCost(apcost), damage(damage)
{}

AWeapon::AWeapon() : name(""), apCost(0), damage(0)
{}

AWeapon::~AWeapon()
{}

AWeapon::AWeapon(const AWeapon &obj)
{
	*this = obj;
}


AWeapon &AWeapon::operator = (const AWeapon &obj)
{
	if (&obj == this)
		return *this;
	this->name = obj.name;
	this->apCost = obj.apCost;
	this->damage = obj.damage;
	return *this;
}

std::string const &AWeapon::getName() const
{
	return (this->name);
}

int AWeapon::getAPCost() const
{
	return (this->apCost);
}

int AWeapon::getDamage() const
{
	return (this->damage);
}

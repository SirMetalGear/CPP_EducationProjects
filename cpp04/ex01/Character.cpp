/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 20:59:59 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/20 13:12:34 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <stdio.h>

Character::Character(std::string const & name)
: name(name), ap(40), weapon(0)
{}

Character::Character()
{}

Character::~Character()
{}

Character::Character(const Character &obj)
{
	*this = obj;
}

Character &Character::operator = (const Character &obj)
{
	if (&obj == this)
		return *this;
	this->name = obj.name;
	this->ap = obj.ap;
	this->weapon = obj.weapon;
	return *this;
}

std::string const &Character::getName() const
{
	return (this->name);
}

void Character::recoverAP()
{
	if (this->ap < 40)
	{
		this->ap = this->ap + 10;
		if (this->ap > 40)
			this->ap = 40;
	}
}

std::string Character::getWeapon()
{
	if (this->weapon != 0)
		return (this->weapon->getName());
	return ("\0");
}

void Character::equip(AWeapon *obj)
{
	if (obj != 0)
		this->weapon = obj;
}

int	Character::getAP()
{
	return (this->ap);
}

void Character::attack(Enemy *obj)
{
	if (this->weapon != 0 && this->ap != 0 && obj != NULL) // && obj->getHP() > 0)
	{
		int	prevAP = this->ap;
		this->ap = this->ap - this->weapon->getAPCost();
		if (this->ap < 0)
		{
			this->ap = prevAP;
			std::cout << "No enough AP\n";
			return ;
		}
		std::cout << this->name << " attacks " << obj->getType()
		<< " with a " << this->weapon->getName() << std::endl;
		this->weapon->attack();
		obj->takeDamage(this->weapon->getDamage());
		if (obj->getHP() <= 0)
		{
			delete obj;
			*&obj = 0;
		}
	}
}

std::ostream &operator << (std::ostream &out, Character &obj)
{
	if (obj.getWeapon() != "\0")
		std::cout << obj.getName() << " has " << obj.getAP() << " AP and wields a " << obj.getWeapon() << std::endl;
	else
		std::cout << obj.getName() << " has " << obj.getAP() << " AP and is unarmed" << std::endl;
	return (out);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 19:16:00 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/22 10:16:28 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!\n";
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh...\n";
}

SuperMutant::SuperMutant(const SuperMutant &obj) : Enemy(0, "")
{
	*this = obj;
}

SuperMutant &SuperMutant::operator = (const SuperMutant &obj)
{
	if (&obj == this)
		return *this;
	this->hp = obj.hp;
	this->type = obj.type;
	return *this;
}

void SuperMutant::takeDamage(int dmg)
{
	if (hp != 0)
	{
		dmg = dmg - 3;
		if (dmg <= 0)
			return ;
		else
			this->hp = this->hp - dmg;
		if (this->hp < 0)
			this->hp = 0;
	}
}

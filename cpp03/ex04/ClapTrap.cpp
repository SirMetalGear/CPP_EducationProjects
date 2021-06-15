/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 11:30:43 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/18 13:04:10 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap parent constructor is called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap parent constructor is destroyed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	std::cout << "Copy constructor of ClapTrap has been called" << std::endl;
	*this = obj;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &obj)
{
	if (&obj == this)
		return *this;
	return *this;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount <= 0)
	{
		std::cout << "*miss*!\n";
		return ;
	}
	amount = amount - ((float)amount / 100 * (float)this->ArmorDamageReduction);
	if (this->HitPoints > 0)
	{
		std::cout << this->Name << " taking " << amount << " points of damage! ";
		this->HitPoints = this->HitPoints - amount;
		if (this->HitPoints <= 0)
		{
			std::cout << "Now dead!\n";
			this->HitPoints = 0;
		}
		else
			std::cout << "And now having " << this->HitPoints << " HP.\n";
	}
	else
		std::cout << "HEY! " << this->Name << " is already dead, mister!\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (amount <= 0)
	{
		std::cout << this->Name << " not repaired.\n";
		return ;
	}
	if (this->HitPoints == 0)
	{
		this->HitPoints = this->HitPoints + amount;
		if (this->HitPoints > this->MaxHitPoints)
			this->HitPoints = this->MaxHitPoints;
		std::cout << this->Name << " got restored and revived with "
		<< this->HitPoints << " HP!\n";
	}
	else if (this->HitPoints == this->MaxHitPoints)
	{
		std::cout << this->Name << " HP is max.\n";
	}
	else
	{
		int	prevHP = this->HitPoints;
		int	amount2 = amount;
		this->HitPoints = this->HitPoints + amount2;
		if (this->HitPoints > this->MaxHitPoints)
		{
			amount2 = this->MaxHitPoints - prevHP;
			this->HitPoints = this->MaxHitPoints;
		}
		std::cout << this->Name << " restored " << amount2 << " HP! "
		<< "And now having " << this->HitPoints << " HP.\n";
	}
}

const std::string	&ClapTrap::getName()
{
	return (this->Name);
}

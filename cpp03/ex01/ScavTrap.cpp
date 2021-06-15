/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 10:37:29 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/18 15:40:29 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name)
{
	this->Name = name;
	this->HitPoints = 100;
	this->MaxHitPoints = 100;
	this->EnergyPoints = 100;
	this->MaxEnergyPoints = 100;
	this->Level = 1;
	this->MeleeAttackDamage = 30;
	this->RangedAttackDamage = 20;
	this->ArmorDamageReduction = 5;
	std::cout << "Object ScavTrap " << name << " is ready to serve!" << std::endl;
}

ScavTrap::ScavTrap()
{
	this->HitPoints = 100;
	this->MaxHitPoints = 100;
	this->EnergyPoints = 50;
	this->MaxEnergyPoints = 100;
	this->Level = 1;
	this->MeleeAttackDamage = 20;
	this->RangedAttackDamage = 15;
	this->ArmorDamageReduction = 3;
	std::cout << "Default constructor ScavTrap is called\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "Object ScavTrap " << this->Name << " is destroyed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj)
{
	std::cout << "Copy constructor of ScavTrap has been called" << std::endl;
	*this = obj;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &obj)
{
	if (&obj == this)
		return *this;
	this->Name = obj.Name;
	this->HitPoints = obj.HitPoints;
	this->MaxHitPoints = obj.MaxHitPoints;
	this->EnergyPoints = obj.EnergyPoints;
	this->MaxEnergyPoints = obj.MaxEnergyPoints;
	this->Level = obj.Level;
	this->MeleeAttackDamage = obj.MeleeAttackDamage;
	this->RangedAttackDamage = obj.RangedAttackDamage;
	this->ArmorDamageReduction = obj.ArmorDamageReduction;
	return *this;
}

int		ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << this->Name << ": Initialize lazer beams!\n" << this->Name << " attacks " << target <<
	" at range, causing " << this->RangedAttackDamage << " points of damage!\n";
	return (this->RangedAttackDamage);
}

int		ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << this->Name << ": Initialize chainsaw!\n" << this->Name << " attacks " << target <<
	" with melee attack, causing " << this->MeleeAttackDamage << " points of damage!\n";
	return (this->MeleeAttackDamage);
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (amount <= 0)
	{
		std::cout << this->Name << ": No incoming damage!\n";
		return ;
	}
	amount = amount - ((float)amount / 100 * (float)this->ArmorDamageReduction);
	if (this->HitPoints > 0)
	{
		std::cout << this->Name << ": Taking damage!\n";
		std::cout << this->Name << " taking " << amount << " points of damage!\n";
		this->HitPoints = this->HitPoints - amount;
		if (this->HitPoints <= 0)
		{
			std::cout << this->Name << ": Mainboard is [NOT FUNCTIONAL]. Initialize self detonation...!\n";
			std::cout << "3\n";
			std::cout << "2\n";
			std::cout << "1\n";
			std::cout << "Joke. Turning off...\n" << this->Name << " DESTROYED!!!!\n";
			this->HitPoints = 0;
		}
	}
	else
		std::cout << "HEY! " << this->Name << " is already dead, mister!\n";
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (amount <= 0)
	{
		std::cout << "ScavTrap " << this->Name << ": please call the certified specialist.\n";
		return ;
	}
	if (this->HitPoints == 0)
	{
		this->HitPoints = this->HitPoints + amount;
		if (this->HitPoints > this->MaxHitPoints)
			this->HitPoints = this->MaxHitPoints;
		std::cout << this->Name << ": Turning on...\nChecking all systems...\n";
		std::cout << "Lazer beams... ";
		std::cout << "[OK]\n";
		std::cout << "Chainsaw beams... ";
		std::cout << "[OK]\n";
		std::cout << "Atom bomb... ";
		std::cout << "[ABSCENT]\n";
		std::cout << "Heads of my enemies...\n";
		std::cout << "Joke module - [OK]\n";
		std::cout << "Mainboard... ";
		std::cout << "[OK]\n";
		std::cout << "All systems working. ScavTrap " << this->Name << " is ready to chop chop\n";
		std::cout << this->Name << " got restored and revived with " << this->HitPoints << " HP!\n";
	}
	else if (this->HitPoints == this->MaxHitPoints)
	{
		std::cout  << "ScavTrap " << this->Name << " is fully functional, no repair is needed!\n";
	}
	else
	{
		int	prevHP = this->HitPoints;
		int	amount2 = amount;
		this->HitPoints = this->HitPoints + amount;
		if (this->HitPoints > this->MaxHitPoints)
		{
			amount2 = this->MaxHitPoints - prevHP;
			this->HitPoints = 100;
		}
		std::cout << this->Name << ": Initialize repair works!\n" << this->Name <<
		" restored " << amount2 << " HP!\n";
	}
}

void		ScavTrap::challengeNewcomer()
{
	std::string setTrap[5] = {"Steven Spielberg's JAWS 3 on floor", "Valak's portrait on wall",
	"Observer Ward on high spot", " used toilet paper on floor", "Thailand Trap"};
	std::cout << this->Name << " initialize " << setTrap[rand() % 5] << std::endl;
}

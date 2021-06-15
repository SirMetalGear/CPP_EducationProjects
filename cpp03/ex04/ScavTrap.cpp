/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 10:37:29 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/18 15:37:56 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name)
{
	this->Name = name;
	this->HitPoints = 100;
	this->MaxHitPoints = 100;
	this->EnergyPoints = 50;
	this->MaxEnergyPoints = 100;
	this->Level = 1;
	this->MeleeAttackDamage = 20;
	this->RangedAttackDamage = 15;
	this->ArmorDamageReduction = 3;
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

void		ScavTrap::challengeNewcomer()
{
	std::string setTrap[5] = {"Steven Spielberg's JAWS 3 on floor", "Valak's portrait on wall",
	"Observer Ward on high spot", "Used toilet paper on floor", "Thailand Trap"};
	std::cout << this->Name << " initialize " << setTrap[rand() % 5] << std::endl;
}

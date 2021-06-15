/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 14:27:07 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/18 15:12:58 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(const std::string &name)
{
	this->Name = name;
	this->HitPoints = FragTrap::HitPoints;
	this->MaxHitPoints = FragTrap::MaxHitPoints;
	this->EnergyPoints = NinjaTrap::EnergyPoints;
	this->MaxEnergyPoints = NinjaTrap::MaxEnergyPoints;
	this->Level = 1;
	this->MeleeAttackDamage = NinjaTrap::MeleeAttackDamage;
	this->RangedAttackDamage = FragTrap::RangedAttackDamage;
	this->ArmorDamageReduction = FragTrap::ArmorDamageReduction;
	std::cout << "SuperTrap " << name << " initialized!" << std::endl;
}

SuperTrap::SuperTrap()
{
	this->HitPoints = FragTrap::HitPoints;
	this->MaxHitPoints = FragTrap::MaxHitPoints;
	this->EnergyPoints = NinjaTrap::EnergyPoints;
	this->MaxEnergyPoints = NinjaTrap::MaxEnergyPoints;
	this->Level = 1;
	this->MeleeAttackDamage = NinjaTrap::MeleeAttackDamage;
	this->RangedAttackDamage = FragTrap::RangedAttackDamage;
	this->ArmorDamageReduction = FragTrap::ArmorDamageReduction;
	std::cout << "SuperTrap default constructor has been called\n";
}

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap " << this->Name << " is destroyed" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &obj)
{
	std::cout << "Copy constructor of SuperTrap has been called" << std::endl;
	*this = obj;
}

SuperTrap &SuperTrap::operator = (const SuperTrap &obj)
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

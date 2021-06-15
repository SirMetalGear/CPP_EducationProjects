/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 10:32:05 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/18 15:35:39 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name)
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
	std::cout << "FragTrap " << name << " GO BABY! GO BABY!" << std::endl;
}

FragTrap::FragTrap()
{
	this->HitPoints = 100;
	this->MaxHitPoints = 100;
	this->EnergyPoints = 100;
	this->MaxEnergyPoints = 100;
	this->Level = 1;
	this->MeleeAttackDamage = 30;
	this->RangedAttackDamage = 20;
	this->ArmorDamageReduction = 5;
	std::cout << "FragTrap default constructor has been called\n";
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->Name << " is destroyed" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj)
{
	std::cout << "Copy constructor of FragTrap has been called" << std::endl;
	*this = obj;
}

FragTrap &FragTrap::operator = (const FragTrap &obj)
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

int		FragTrap::rangedAttack(std::string const & target)
{
	std::cout << this->Name << ": Pew Pew Pew!\n" << this->Name << " attacks " << target <<
	" at range, causing " << this->RangedAttackDamage << " points of damage!\n";
	return (this->RangedAttackDamage);
}

int		FragTrap::meleeAttack(std::string const & target)
{
	std::cout << this->Name << ": DIE! DIEE!!\n" << this->Name << " attacks " << target <<
	" with melee attack, causing " << this->MeleeAttackDamage << " points of damage!\n";
	return (this->MeleeAttackDamage);
}

int		FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int	damage;
	damage = rand() % 100;
	if (this->EnergyPoints != 0)
	{
		std::string chooseYourDeath[5] = {" OH NO! HE BROUGHT MINIGUN! ",
		" WITH HUGS ", " ВСПОМНИЛ РУССКИЕ КОРНИ И ВЗЯЛ БАЛАЛАЙКУ ", " WITH FLICK ", " WITH POKE IN THE EYE "};
		std::cout << this->Name << chooseYourDeath[rand() % 5] << "and dealt "
		<< damage << " damage to " << target << "!\n";
		this->EnergyPoints = this->EnergyPoints - 25;
		return (damage);
	}
	else
		std::cout << this->Name << " is out of energy!\n";
	return 0;
}

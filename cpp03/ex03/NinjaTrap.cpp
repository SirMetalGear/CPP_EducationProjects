/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 12:23:14 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/18 15:38:44 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(const std::string &name)
{
	this->Name = name;
	this->HitPoints = 60;
	this->MaxHitPoints = 60;
	this->EnergyPoints = 120;
	this->MaxEnergyPoints = 120;
	this->Level = 1;
	this->MeleeAttackDamage = 60;
	this->RangedAttackDamage = 5;
	this->ArmorDamageReduction = 0;
	std::cout << "NinjaTrap " << name << " I fight to protect weak people!" << std::endl;
}

NinjaTrap::NinjaTrap()
{
	this->HitPoints = 60;
	this->MaxHitPoints = 60;
	this->EnergyPoints = 120;
	this->MaxEnergyPoints = 120;
	this->Level = 1;
	this->MeleeAttackDamage = 60;
	this->RangedAttackDamage = 5;
	this->ArmorDamageReduction = 0;
	std::cout << "NinjaTrap default constructor has been called\n";
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "Object NinjaTrap " << this->Name << " is destroyed" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &obj)
{
	std::cout << "Copy constructor of NinjaTrap has been called" << std::endl;
	*this = obj;
}

NinjaTrap &NinjaTrap::operator = (const NinjaTrap &obj)
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

int		NinjaTrap::rangedAttack(std::string const & target)
{
	std::cout << this->Name << ": Getsuga tenshou!\n" << this->Name << " attacks " << target <<
	" with Reiatsu, causing " << this->RangedAttackDamage << " points of damage!\n";
	return (this->RangedAttackDamage);
}

int		NinjaTrap::meleeAttack(std::string const & target)
{
	std::cout << this->Name << ": ZANGETSU!\n" << this->Name << " attacks " << target <<
	" with Zangetsu, causing " << this->MeleeAttackDamage << " points of damage!\n";
	return (this->MeleeAttackDamage);
}

void	NinjaTrap::ninjaShoebox(ClapTrap &obj)
{
	(void)obj;
	std::cout << this->Name << ": ClapTrap master! I will not betray you!\n";
	delete &obj;
}

void	NinjaTrap::ninjaShoebox(FragTrap &obj)
{
	int	damage;
	damage = obj.meleeAttack(this->Name);
	this->takeDamage(damage);
	std::cout << this->Name << ": " << obj.getName() << ", you will pay for this!\n";
	std::cout << this->Name << ": BANKAI! (From now melee attack damage is 1000)\n";
	this->MeleeAttackDamage = 1000;
	meleeAttack(obj.getName());
	obj.takeDamage(this->MeleeAttackDamage);
	delete &obj;
}

void	NinjaTrap::ninjaShoebox(ScavTrap &obj)
{
	obj.challengeNewcomer();
	std::cout << this->Name << ": AGHH! " << obj.getName() <<
	", that was a dirty trick! I will crush you!\n";
	meleeAttack(obj.getName());
	obj.takeDamage(this->MeleeAttackDamage);
	delete &obj;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &obj, const std::string &target)
{
	std::cout << this->Name << ": Final Getsuga Tenshou! MUGETSU!\n" << this->Name
	<< " deals 4294967295 damage to " << target << std::endl;
	std::cout << this->Name << " is losing his powers...\n" << this->Name << " HP set to 0!\n";
	obj.HitPoints = 0;
}

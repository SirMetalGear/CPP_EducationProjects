/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 10:32:05 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/18 15:34:22 by mlorette         ###   ########.fr       */
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
	std::cout << name << " GO BABY! GO BABY!" << std::endl;
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
	std::cout << "Object " << this->Name << " is destroyed" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj)
{
	std::cout << "Copy constructor has been called" << std::endl;
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

void	FragTrap::takeDamage(unsigned int amount)
{
	if (amount <= 0)
	{
		std::cout << this->Name << ": YOU MISSED, FOOL!\n";
		return ;
	}
	amount = amount - ((float)amount / 100 * (float)this->ArmorDamageReduction);
	if (this->HitPoints > 0)
	{
		std::cout << this->Name << ": ARGHH!\n";
		std::cout << this->Name << " taking " << amount << " points of damage!\n";
		this->HitPoints = this->HitPoints - amount;
		if (this->HitPoints <= 0)
		{
			std::cout << this->Name << ": SAY TO MY SON THAT HE IS MY SON!\nFR4G-TP "
			<< this->Name << " DESTROYED!!!!\n";
			this->HitPoints = 0;
		}
	}
	else
		std::cout << "HEY! " << this->Name << " is already dead, mister!\n";
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (amount <= 0)
	{
		std::cout << "YOU FORGOT YOUR INSTRUMENTS!\n";
		return ;
	}
	if (this->HitPoints == 0)
	{
		this->HitPoints = this->HitPoints + amount;
		if (this->HitPoints > this->MaxHitPoints)
			this->HitPoints = this->MaxHitPoints;
		std::cout << this->Name << ": IM ALIVE BABY!\n" << this->Name
		<< " got restored and revived with " << this->HitPoints << " HP!\n";
	}
	else if (this->HitPoints == this->MaxHitPoints)
	{
		std::cout << "I AIN'T NEED YOUR HELP!\n" << this->Name << " HP is max.\n";
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
		std::cout << this->Name << ": LOOK AT MY SHINY METAL ASS!\n" << this->Name <<
		" restored " << amount2 << " HP!\n";
	}
}

int		FragTrap::getHitPoints()
{
	return (this->HitPoints);
}

int		FragTrap::getEnergyPoints()
{
	return (this->EnergyPoints);
}

int		FragTrap::status()
{
	if (this->HitPoints == 0 || this->EnergyPoints == 0)
		return (0);
	return (1);
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

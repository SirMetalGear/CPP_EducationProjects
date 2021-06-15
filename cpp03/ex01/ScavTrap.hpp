/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 10:37:15 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/18 15:37:06 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include <iostream>
# include <cstdlib>
# include <unistd.h>

class ScavTrap
{
private:
	std::string	Name;
	int			HitPoints;
	int			MaxHitPoints;
	int			EnergyPoints;
	int			MaxEnergyPoints;
	int			Level;
	int			MeleeAttackDamage;
	int			RangedAttackDamage;
	int			ArmorDamageReduction;
public:
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap &obj);
	ScavTrap();
	~ScavTrap();

	int		rangedAttack(std::string const & target);
	int		meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	challengeNewcomer();

	ScavTrap	&operator = (const ScavTrap &obj);
};

#endif

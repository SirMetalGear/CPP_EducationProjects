/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 11:30:49 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/18 13:04:13 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>
# include <cstdlib>
# include <unistd.h>

class ClapTrap
{
protected:
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
	ClapTrap();
	ClapTrap(const ClapTrap &obj);
	~ClapTrap();

	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);
	const std::string	&getName();
	ClapTrap	&operator = (const ClapTrap &obj);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 10:32:10 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/18 15:34:20 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include <iostream>
# include <cstdlib>
# include <unistd.h>

class FragTrap
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
	FragTrap(const std::string &name);
	FragTrap(const FragTrap &obj);
	FragTrap();
	~FragTrap();

	int		rangedAttack(std::string const & target);
	int		meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	int		vaulthunter_dot_exe(std::string const & target);
	int		status();
	int		getHitPoints();
	int		getEnergyPoints();

	FragTrap	&operator = (const FragTrap &obj);
};

#endif

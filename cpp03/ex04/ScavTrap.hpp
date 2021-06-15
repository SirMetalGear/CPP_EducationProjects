/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 10:37:15 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/18 15:38:30 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <string>
# include <iostream>
# include <cstdlib>
# include <unistd.h>

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap &obj);
	ScavTrap();
	~ScavTrap();
	ScavTrap	&operator = (const ScavTrap &obj);

	int		rangedAttack(std::string const & target);
	int		meleeAttack(std::string const & target);
	void	challengeNewcomer();
};

#endif

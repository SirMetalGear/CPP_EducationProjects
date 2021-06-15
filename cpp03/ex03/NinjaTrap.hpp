/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 12:23:19 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/18 15:38:52 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <string>
# include <iostream>
# include <cstdlib>
# include <unistd.h>

class NinjaTrap : public ClapTrap
{
public:
	NinjaTrap(const std::string &name);
	NinjaTrap(const NinjaTrap &obj);
	NinjaTrap();
	~NinjaTrap();
	NinjaTrap	&operator = (const NinjaTrap &obj);

	int		rangedAttack(std::string const & target);
	int		meleeAttack(std::string const & target);
	void	ninjaShoebox(ClapTrap &obj);
	void	ninjaShoebox(FragTrap &obj);
	void	ninjaShoebox(ScavTrap &obj);
	void	ninjaShoebox(NinjaTrap &obj, const std::string &target);
};

#endif

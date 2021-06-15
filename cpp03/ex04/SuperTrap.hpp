/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 14:27:12 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/18 15:18:10 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"
# include <string>
# include <iostream>
# include <cstdlib>
# include <unistd.h>

class SuperTrap : virtual public FragTrap, virtual public NinjaTrap
{
public:
	SuperTrap();
	SuperTrap(const std::string &name);
	SuperTrap(const SuperTrap &obj);
	~SuperTrap();
	SuperTrap	&operator = (const SuperTrap &obj);

	using FragTrap::rangedAttack;
	using NinjaTrap::meleeAttack;
};

#endif
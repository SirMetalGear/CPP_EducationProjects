/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 10:32:10 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/18 15:36:21 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <string>
# include <iostream>
# include <cstdlib>
# include <unistd.h>

class FragTrap : public ClapTrap
{
public:
	FragTrap(const std::string &name);
	FragTrap(const FragTrap &obj);
	FragTrap();
	~FragTrap();
	FragTrap	&operator = (const FragTrap &obj);

	int					rangedAttack(std::string const & target);
	int					meleeAttack(std::string const & target);
	int					vaulthunter_dot_exe(std::string const & target);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 11:21:10 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/18 14:21:55 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int 		main( void )
{
	{
		srand(time(NULL));
		std::string target("Coffee machine");
		FragTrap *a = new FragTrap("BENDER");
		a->meleeAttack(target);
		a->takeDamage(27);
		a->rangedAttack(target);
		a->takeDamage(3);
		a->takeDamage(5);
		a->takeDamage(1200);
		a->beRepaired(50);
		a->takeDamage(10);
		a->beRepaired(50);
		a->beRepaired(500);
		a->vaulthunter_dot_exe(target);
		a->vaulthunter_dot_exe(target);
		a->vaulthunter_dot_exe(target);
		a->vaulthunter_dot_exe(target);
		a->vaulthunter_dot_exe(target);
		a->vaulthunter_dot_exe(target);
		delete a;
	}
	{
		srand(time(NULL));
		std::string target("Delivery boy");
		ScavTrap *a = new ScavTrap("R2D2");
		a->meleeAttack(target);
		a->takeDamage(27);
		a->rangedAttack(target);
		a->takeDamage(3);
		a->takeDamage(5);
		a->takeDamage(1200);
		a->beRepaired(50);
		a->takeDamage(10);
		a->beRepaired(50);
		a->beRepaired(500);
		a->beRepaired(500);
		a->challengeNewcomer();
		a->challengeNewcomer();
		a->challengeNewcomer();
		a->challengeNewcomer();
		a->challengeNewcomer();
		delete a;
	}
	{
		srand(time(NULL));
		FragTrap *a = new FragTrap("BENDER");
		ScavTrap *b = new ScavTrap("R2D2");
		ClapTrap *d = new ClapTrap();
		std::string target("Aizen");
		NinjaTrap c("Ichigo Kurosaki");
		c.meleeAttack(target);
		c.takeDamage(27);
		c.rangedAttack(target);
		c.takeDamage(3);
		c.takeDamage(5);
		c.takeDamage(1200);
		c.beRepaired(50);
		c.takeDamage(10);
		c.beRepaired(50);
		c.beRepaired(500);
		c.ninjaShoebox(*d);
		c.ninjaShoebox(*a);
		c.ninjaShoebox(*b);
		c.ninjaShoebox(c, target);
	}
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 11:21:10 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/18 12:01:32 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

// static int	nowItsPersonal(std::string &name1, std::string &name2)
// {
// 	FragTrap 	a(name1);
// 	FragTrap 	b(name2);
// 	FragTrap 	*obj1 = 0;
// 	FragTrap 	*obj2 = 0;
// 	int			damage;
// 	int			coin;

// 	coin = rand() % 2;
// 	std::cout << "Flipping a coin..." << std::endl;
// 	sleep(1);
// 	if (coin == 0)
// 	{
// 		std::cout << "It's OREL! " << name1 << " has a first turn!\n";
// 		obj1 = &a;
// 		obj2 = &b;
// 	}
// 	else
// 	{
// 		std::cout << "It's RESHKA! " << name2 << " has a first turn!\n";
// 		obj1 = &b;
// 		obj2 = &a;
// 		std::string tmpName;
// 		tmpName = name1;
// 		name1 = name2;
// 		name2 = tmpName;
// 	}
// 	sleep(1);
// 	while (obj1->status() != 0 && obj2->status() != 0)
// 	{
// 		sleep(1);
// 		damage = obj1->vaulthunter_dot_exe(name2);
// 		obj2->takeDamage(damage);
// 		if (obj2->status() != 0)
// 		{
// 			sleep(1);
// 			damage = obj2->vaulthunter_dot_exe(name1);
// 			obj1->takeDamage(damage);
// 		}
// 	}
// 	if (a.getHitPoints() != 0 && b.getHitPoints() != 0 && a.getEnergyPoints() == 0
// 	&& b.getEnergyPoints() == 0)
// 		std::cout << "What a fight! Both players are still alive! IT'S A DRAW!\n";
// 	return 0;
// }

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
	// {
	// 	srand(time(NULL));
	// 	std::string	name1;
	// 	std::string	name2;
	// 	std::cout << "Player A: ";
	// 	std::getline(std::cin, name1);
	// 	std::cout << "Player B: ";
	// 	std::getline(std::cin, name2);
	// 	nowItsPersonal(name1, name2);
	// }
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
		a->challengeNewcomer();
		a->challengeNewcomer();
		a->challengeNewcomer();
		a->challengeNewcomer();
		a->challengeNewcomer();
		delete a;
	}
	return 0;
}
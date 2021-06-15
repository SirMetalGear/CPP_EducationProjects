/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:04:32 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/22 10:35:23 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

void	test1()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	PowerFist a2 = PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	delete pr;
	delete pf;
	delete me;
}

void	test2()
{
	Character hero("HawkEye");
	AWeapon *pr = new PlasmaRifle();
	AWeapon *pf = new PowerFist();
	hero.equip(pr);
	hero.attack(NULL);
	std::cout << "Enemy is spawned\n";
	Enemy *enemy2 = new SuperMutant();
	std::cout << hero;
	hero.attack(enemy2);
	hero.attack(enemy2);
	hero.attack(enemy2);
	std::cout << enemy2->getHP() << std::endl;
	hero.attack(enemy2);
	std::cout << enemy2->getHP() << std::endl;
	hero.attack(enemy2);
	std::cout << enemy2->getHP() << std::endl;
	hero.attack(enemy2);
	std::cout << enemy2->getHP() << std::endl;
	hero.equip(pf);
	std::cout << hero;
	hero.attack(enemy2);
	hero.attack(enemy2);
	hero.attack(enemy2);
	hero.attack(enemy2);
	hero.recoverAP();
	hero.recoverAP();
	hero.recoverAP();
	hero.recoverAP();
	std::cout << hero;
	delete pr;
	delete pf;
	delete enemy2;
}

int main()
{
	test1();
	test2();
	// while (1);
	return 0;
}
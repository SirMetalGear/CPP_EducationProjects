/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 17:59:02 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/24 11:34:06 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

void	test1()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;

	ISpaceMarine* bob2 = new TacticalMarine;
	ISpaceMarine* jim2 = new AssaultTerminator;

	ISpaceMarine* bob3 = new TacticalMarine;
	ISpaceMarine* jim3 = new AssaultTerminator;

	ISpaceMarine* bob4 = new TacticalMarine;
	ISpaceMarine* jim4 = new AssaultTerminator;

	ISpaceMarine* bob5 = new TacticalMarine;
	ISpaceMarine* jim5 = new AssaultTerminator;

	ISpaceMarine* bob6 = new TacticalMarine;
	ISpaceMarine* jim6 = new AssaultTerminator;
	
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	vlc->push(bob2);
	vlc->push(jim2);
	vlc->push(bob3);
	vlc->push(jim3);
	vlc->push(bob4);
	vlc->push(jim4);
	vlc->push(bob5);
	vlc->push(jim5);
	vlc->push(bob6);
	vlc->push(jim6);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
}

void	test2()
{
	ISquad* vlc = new Squad;
	vlc->getUnit(1);
	vlc->push(NULL);
	vlc->push(NULL);
	vlc->push(NULL);
	vlc->push(NULL);
	std::cout << vlc->getCount() << std::endl;
	ISpaceMarine* cur = vlc->getUnit(0);
	if (cur == 0)
		return ;
	cur->battleCry();
	std::cout << vlc->getCount() << std::endl;
}

int		test()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	return 0;
}

int main()
{
	test();
	test1();
	test2();
	while (1);
	return 0;
}

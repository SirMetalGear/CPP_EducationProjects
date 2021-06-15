/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 12:07:50 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/21 16:36:35 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Bart.hpp"

void	test1()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
}

void	test2CopyCheck()
{
	Sorcerer robert("Robert", "the Magnificent");
	Sorcerer fidel = robert;
	std::cout << &fidel << std::endl;
	std::cout << &robert << std::endl;
}

void	test3Enhanced()
{
	Bart bart("Bart");
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe << bart;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(bart);
}

int main()
{
	test1();
	// test2CopyCheck();
	// test3Enhanced();
	return 0;
}
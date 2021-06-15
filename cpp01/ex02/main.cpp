/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 15:27:49 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/09 11:29:46 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <cstdlib>

Zombie	*randomChump()
{
	std::string name[10] = {"HK-47", "R2D2", "Luke Skywalker", "Darth Revan",
	"Darth Treya", "Yoda", "Obi Wan", "Enakin", "Palpatin", "Padme"};
	std::string type[10] = {"Broken", "Condemned", "Forceless", "High ground",
	"Betrayed", "Dark Sided", "Faithless", "Doomed", "Burnt", "Fallen"};
	return new Zombie(type[rand() % 10], name[rand() % 10]);
}

int 	main()
{
	ZombieEvent a;
	a.setZombieType("Brainless");
	Zombie *b = a.newZombie("Steve");
	b->announce();
	delete b;
	Zombie *crowd[10];
	srand(time(NULL));
	for(int i = 0; i < 9; i++)
	{
		crowd[i] = randomChump();
		crowd[i]->announce();
	}
	for(int i = 0; i < 9; i++)
		delete crowd[i];
	return (0);
}

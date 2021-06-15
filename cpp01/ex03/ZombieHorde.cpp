/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 15:28:05 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/09 13:55:26 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : N(N)
{
	std::string name[10] = {"HK-47", "R2D2", "Luke Skywalker", "Darth Revan",
	"Darth Treya", "Yoda", "Obi Wan", "Enakin", "Palpatin", "Padme"};
	std::string type[10] = {"Broken", "Condemned", "Forceless", "High ground",
	"Betrayed", "Dark Sided", "Faithless", "Doomed", "Burnt", "Fallen"};
	// this->N = N;
	this->horde = new Zombie[N];
	srand(time(NULL));
	for (int i = 0; i < N; i++)
		this->horde[i].set_params(type[rand() % 10], name[rand() % 10]);
}

ZombieHorde::~ZombieHorde()
{
	delete [] this->horde;
	std::cout << "ZombieHorde R.I.P\n";
}

void	ZombieHorde::announce()
{
	for (int i = 0; i < N; i++)
		this->horde[i].announce();
}

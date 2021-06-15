/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 19:18:15 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/09 13:58:14 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <unistd.h>

int	main()
{
	std::cout << "\n                    Creating ZombieHorde on stack...\n\n";
	ZombieHorde a(5);
	a.announce();
	std::cout << "\n                    Creating ZombieHorde on heap...\n\n";
	srand(time(NULL));
	sleep(1);
	ZombieHorde *b = new ZombieHorde(5);
	b->announce();
	std::cout << "\n                    Deleting ZombieHorde on heap...\n\n";
	delete b;
	std::cout << "\n                    Deleting ZombieHorde on stack...\n\n";
	return (0);
}

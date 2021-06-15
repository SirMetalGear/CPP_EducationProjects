/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 14:36:32 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/08 14:57:31 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack()
{
	std::cout << "Creating Pony on stack..." << std::endl;
	Pony a("Mp3", "black");
	a.say_hello();
}

void	ponyOnTheHeap()
{
	std::cout << "Creating Pony on heap..." << std::endl;
	Pony *b = new Pony("FLAC", "brown");
	b->say_hello();
	delete b;
}

int	main()
{
	ponyOnTheStack();
	ponyOnTheHeap();
	return (0);
}
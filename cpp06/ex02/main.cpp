/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 18:36:52 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/30 19:27:15 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base *generate(void)
{
	Base *base[3];
	base[0] = new A;
	base[1] = new B;
	base[2] = new C;
	int	rand_num = rand() % 3;
	for (int i = 0; i < 3; i++)
	{
		if (i != rand_num)
			delete base[i];
	}
	std::cout << rand_num << std::endl;
	return (base[rand_num]);
}

void	identify_from_pointer(Base *p)
{
	A *a = dynamic_cast<A *>(p);
	if (a != 0)
		std::cout << "A" << std::endl;
	else
	{
		B *a = dynamic_cast<B *>(p);
		if (a != 0)
			std::cout << "B" << std::endl;
		else
			std::cout << "C" << std::endl;
	}
}

void	identify_from_reference(Base &p)
{
	try
	{
		A a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			B a = dynamic_cast<B &>(p);
			std::cout << "B" << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{
				C a = dynamic_cast<C &>(p);
				std::cout << "C" << std::endl;
			}
			catch(const std::exception& e)
			{}
		}
	}
}

void	test()
{
	Base *base = generate();
	identify_from_pointer(base);
	identify_from_reference(*base);
	delete base;
}

int	main()
{
	srand(time(NULL));
	for (int i = 0; i < 200; i++)
	{
		std::cout << i << std::endl;
		test();
	}
	return (0);
}
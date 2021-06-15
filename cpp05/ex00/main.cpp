/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 11:11:40 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/29 11:59:54 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	ex1()
{
	
}

void	test1()
{
	try
	{
		Bureaucrat bob("Bob", 150);
		std::cout << bob << std::endl;
		bob.gradeMinus();
		std::cout << "You should never see this msg\n";
	}
	catch(std::exception &e)
	{
		std::cerr << "Exception has been thrown: " << e.what() << '\n';
	}
	try
	{
		Bureaucrat bob("Bob", 1);
		std::cout << bob << std::endl;
		bob.gradePlus();
		std::cout << "You should never see this msg\n";
	}
	catch(std::exception &e)
	{
		std::cerr << "Exception has been thrown: " << e.what() << '\n';
	}
}

void	test2()
{
	try
	{
		Bureaucrat bob("", 150);
		std::cout << "You should never see this msg\n";
	}
	catch(std::exception &e)
	{
		std::cerr << "Exception has been thrown: " << e.what() << '\n';
	}
	try
	{
		Bureaucrat bob("bob", 0);
		std::cout << "You should never see this msg\n";
	}
	catch(std::exception &e)
	{
		std::cerr << "Exception has been thrown: " << e.what() << '\n';
	}
}

void	test3()
{
	try
	{
		Bureaucrat bob("Ok Lenny", 149);
		std::cout << bob << std::endl;
		bob.gradeMinus();
		std::cout << bob << std::endl;
		bob.gradePlus();
		std::cout << bob << std::endl;
		std::cout << "No exception has been thrown\n";
	}
	catch(std::exception &e)
	{
		std::cerr << "Exception has been thrown: " << e.what() << '\n';
	}
}

int	main()
{
	test1();
	test2();
	test3();
	return (0);
}
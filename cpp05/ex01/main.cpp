/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 11:11:40 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/24 17:59:52 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	test1()
{
	try
	{
		Form a1("a1", 2, 0);
	}
	catch(std::exception &e)
	{
		std::cerr << "Exception has been thrown: " << e.what() << '\n';
	}
	try
	{
		Form a1("a1", 2, 5);
		std::cout << a1 << std::endl;
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
		Bureaucrat bob("Bob The Mighty", 150);
		std::cout << bob << std::endl;
		Form a1("a1", 2, 5);
		std::cout << a1 << std::endl;
		bob.signForm(a1);
	}
	catch(std::exception &e)
	{
		std::cerr << "Exception has been thrown: " << e.what() << '\n';
	}
	try
	{
		Bureaucrat bob("bob", 1);
		std::cout << bob << std::endl;
		Form a1("a1", 2, 5);
		std::cout << a1 << std::endl;
		bob.signForm(a1);
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
	return (0);
}
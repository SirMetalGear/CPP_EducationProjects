/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 15:14:59 by mlorette          #+#    #+#             */
/*   Updated: 2021/05/04 22:22:05 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>
#include <list>

void	test1()
{
	int	find = 1;
	std::vector<int> v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(2);
	v.push_back(4);
	v.push_back(5);
	try
	{
		std::cout << *easyfind(v, find) << std::endl;
		std::cout << "The number is present inside of container!\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << "Out of array!\n";
	}
}

void	test2()
{
	int	find = 123;
	std::list<int> list;
	list.push_back(1);
	list.push_back(3);
	list.push_back(2);
	list.push_back(4);
	list.push_back(5);
	try
	{
		std::cout << *easyfind(list, find) << std::endl;
		std::cout << "The number is present inside of container!\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << "Out of array!\n";
	}
}

int	main()
{
	test1();
	test2();
	return (0);
}

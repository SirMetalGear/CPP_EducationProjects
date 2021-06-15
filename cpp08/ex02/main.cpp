/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 14:11:13 by mlorette          #+#    #+#             */
/*   Updated: 2021/05/24 14:39:30 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <stack>
#include <iostream>

void	test1()
{

	MutantStack<int> mstack;
	// mstack.top()
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
}

void	test2()
{
	std::cout << "\nCHECKING 10 OBJS...\n";
	MutantStack<int> mstack;
	for (int i = 0; i < 10; i++)
		mstack.push(i + 1);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "\nCHECKING ASSIGNMENT...\n";
	MutantStack<int> s;
	s = mstack;
	it = s.begin();
	ite = s.end();
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "\nCHECKING CHANGE OF OBJECT THROUGH ITERATOR...\n";
	it = mstack.begin();
	ite = mstack.end();
	while (it != ite)
	{
		*it += 10;
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << mstack.top() << std::endl;
}

void	test3()
{
	std::cout << "\nCHECKING COMPARISON OPERATORS...\n\n";
	MutantStack<std::string> mstack;
	MutantStack<std::string> mstack2;
	mstack.push("wow");
	mstack2.push("wow");
	mstack.push("string1");
	mstack2.push("string2");
	mstack.push("AAA");
	mstack2.push("BBB");
	MutantStack<std::string>::iterator it = mstack.begin();
	MutantStack<std::string>::iterator ite = mstack.end();
	MutantStack<std::string>::iterator it2 = mstack2.begin();
	MutantStack<std::string>::iterator ite2 = mstack2.end();
	while (it != ite)
	{
		if (*it == *it2)
			std::cout << "Element '" << *it << "' is same for both objects!\n";
		else
		{
			if (*it > *it2)
				std::cout << "Element '" << *it << "' is greater than '" << *it2 << "'\n";
			else if (*it < *it2)
				std::cout << "Element '" << *it2 << "' is greater than '" << *it << "'\n";
		}
		++it;
		++it2;
	}
}

int main()
{
	test1();
	test2();
	test3();
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 16:51:42 by mlorette          #+#    #+#             */
/*   Updated: 2021/05/04 14:07:06 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <list>
#include <sys/time.h>
#include <unistd.h>

void	testCommon()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void	testAdvanced()
{
	Span crazy(10000000);
	for (int i = 0; i < 10000000; i++)
		crazy.addNumber((rand() % 1000) + 1);
	std::cout << crazy.shortestSpan() << std::endl;
	std::cout << crazy.longestSpan() << std::endl;
}

void	testTwoItems()
{
	Span tiny(2);
	tiny.addNumber(-1);
	tiny.addNumber(5);
	std::cout << tiny.shortestSpan() << std::endl;
	std::cout << tiny.longestSpan() << std::endl;
}

void	testException()
{
	Span a(1);
	try
	{
		a.addNumber(1);
		a.longestSpan();
		// a.addNumber(2);
	}
	catch(const std::exception& e)
	{
		std::cerr << "EXCEPTION HAS BEEN CAUGHT: " << e.what() << '\n';
	}
	
}

void	testAdvancedAddNumber()
{
	Span sp(10);
	std::list<int> vect;
	int	a[10] = {123152512, 124125355, 5476253, 2354376, 13463215, 2, 341, 3416547, 234, 123};
	vect.insert(vect.end(), a, a + 10);
	sp.addNumber< std::list<int> >(vect.begin(), vect.end());
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void	tests()
{
	// testCommon();
	// testAdvanced();
	// testTwoItems();
	// testException();
	testAdvancedAddNumber();
}

int main()
{
	srand(time(NULL));
	struct timeval tp;
	gettimeofday(&tp, NULL);
	long start_microsec = 1000000 * tp.tv_sec + tp.tv_usec;	
	tests();
	gettimeofday(&tp, NULL);
	std::cout << (1000000 * tp.tv_sec + tp.tv_usec) - start_microsec << " microsecs has passed!\n";
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 15:20:18 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/13 10:21:01 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

void	memoryLeak()
{
	std::string* panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete panther;
}

void	memoryLeak2()
{
	std::string panther = std::string("String panther");
	std::cout << panther << std::endl;
}

int		main()
{
    memoryLeak();
	memoryLeak2();
	// while(1);
	return (0);
}

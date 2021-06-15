/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 19:11:09 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/09 19:18:37 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string a = "HI THIS IS BRAIN";
	std::string *pointer = &a;
	std::string &reference = a;
	std::cout << *pointer << std::endl;
	std::cout << reference << std::endl;
	return (0);
}

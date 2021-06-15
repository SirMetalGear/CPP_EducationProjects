/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 13:18:31 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/30 12:26:47 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2 || argv[1] == '\0')
	{
		std::cerr << "Arguments error\n";
		return 1;
	}
	try
	{
		Converter a(argv[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << "EXCEPTION FROM MAIN: " <<  e.what() << '\n';
	}
	return 0;
}

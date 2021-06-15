/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 12:37:08 by mlorette          #+#    #+#             */
/*   Updated: 2021/05/20 18:07:10 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contacts.hpp"

int			main()
{
	int			i;
	
	std::string input_data;
	PhoneBook pb;
	i = 0;
	std::cout << "phonebook: ADD, SEARCH, EXIT: ";
	while (std::getline(std::cin, input_data) != 0)
	{
		if (input_data.compare("ADD") == 0)
		{
			if (pb.fill_contact() == -1)
				return (1);
		}
		else if (input_data.compare("SEARCH") == 0)
			pb.show_data();
		else if (input_data.compare("EXIT") == 0)
		{
			std::cout << "Have a nice day!\n";
			break ;
		}
		else
			std::cout << "Invalid command\n";
		std::cout << "phonebook: ADD, SEARCH, EXIT: ";
	}
	return (0);
}

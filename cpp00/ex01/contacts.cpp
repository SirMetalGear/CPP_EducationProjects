/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 14:14:28 by mlorette          #+#    #+#             */
/*   Updated: 2021/05/20 18:10:13 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contacts.hpp"

PhoneBook::PhoneBook()
{
	iterator = 0;
	fill_name[0] = "First name: ";
	fill_name[1] = "Last name:  ";
	fill_name[2] = "Nickname:   ";
	fill_name[3] = "Login:      ";
	fill_name[4] = "Postal:     ";
	fill_name[5] = "Address:    ";
	fill_name[6] = "Email:      ";
	fill_name[7] = "Phone num:  ";
	fill_name[8] = "Birthday:   ";
	fill_name[9] = "Fav Meal:   ";
}

PhoneBook::~PhoneBook()
{}

void	PhoneBook::show_data()
{
	if (iterator == 0)
	{
		std::cout << "No contacts\n";
		return ;
	}
	for (int i = 0; i < iterator; i++)
	{
		std::cout << i + 1 << " |";
		for (int j = 0; j < 3; j++)
		{
			std::cout << std::setw(10) << contacts[i][j];
			std::cout << "|";
		}
		std::cout << std::endl;
	}
	std::cout << "Choose contact from " << 1 << " to " << iterator << ": ";
	std::string input;
	std::getline(std::cin, input);
	int index = std::stoi(input);
	if (index > iterator || index < 0)
	{
		std::cout << "Wrong input\n";
		return ;
	}
	show_all(index);
}

void	PhoneBook::show_all(int n)
{
	for (int j = 0; j < 10; j++)
	{
		std::cout << fill_name[j];
		std::cout << contacts[n][j] << std::endl;
	}
}

int		PhoneBook::fill_contact()
{
	int	i = 0;
	if (iterator == 8)
	{
		std::cout << "Phonebook is already full!\n";
		return 0;
	}
	while (i < 10)
	{
		std::cout << fill_name[i];
		std::getline(std::cin, contacts[iterator][i++]);
	}
	std::cout << "Contact has been created!\n";
	iterator++;
	return (0);
}

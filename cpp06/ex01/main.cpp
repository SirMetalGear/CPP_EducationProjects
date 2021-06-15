/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 13:17:30 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/30 15:49:21 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Data.hpp"

void	*serialize(void)
{
	Data	*data = new Data;
	const char str[43] = "qwertyuiop[]asdfghjkl;'xcvbnm,./1234567890";
	int arraySize = rand() % 43;
	for (int i = 0; i < arraySize; i++)
	{
		data->a = data->a + str[rand() % 43];
		data->b = data->b + str[rand() % 43];
	}
	data->num = rand() % INT_MAX;
	std::cout << "BEFORE SERIALIZE: First string:             " << data->a << std::endl;
	std::cout << "BEFORE SERIALIZE: Random integer:           " << data->num << std::endl;
	std::cout << "BEFORE SERIALIZE: Second string:            " << data->b << std::endl;
	return reinterpret_cast<void *>(data); // return address on the heap
}

Data *deserialize(void *raw)
{
	return reinterpret_cast<Data *>(raw);
}

void	test1()
{
	Data *data;
	data = deserialize(serialize());
	std::cout << "AFTER DESERIALIZE: First string:            " << data->a << std::endl;
	std::cout << "AFTER DESERIALIZE: Random integer:          " << data->num << std::endl;
	std::cout << "AFTER DESERIALIZE: Second string:           " << data->b << std::endl;
	std::cout << "Size of first string: " << sizeof(data->a) << std::endl;
	std::cout << "Size of integer: " << sizeof(data->num) << std::endl;
	std::cout << "Size of second string: " << sizeof(data->b) << std::endl;
	std::cout << "Size of the Data structure: " << sizeof(Data) << std::endl;
	delete data;
}

int	main()
{
	srand(time(NULL));
	test1();
	return (0);
}

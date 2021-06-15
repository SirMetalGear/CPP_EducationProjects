/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 10:34:44 by mlorette          #+#    #+#             */
/*   Updated: 2021/05/02 13:48:56 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

class Test
{
private:
	std::string	_name;
public:
	Test() {
		std::string wow[5] = {"Mario", "Giorgio Giovanni", "Hulio",
		"Eduardo", "Pablo"};
		_name = wow[rand() % 5];
	}
	std::string	const &getName() {
		return (this->_name);
	}
	~Test() {}
};

std::ostream &operator << (std::ostream &out, Test &obj) {
	out << obj.getName();
	return (out);
}

void	testAdvanced()
{
	std::cout << "___________CLASS OBJECTS CHECK_________\n";
	Array<Test> wow(5);
	for (int i = 0; i < 5; i++)
		std::cout << "wow[" << i << "]: " << wow[i] << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << "wow[" << i << "]: " << wow[i] << std::endl;
}

void	testCommonCases()
{
	std::cout << "___________INT ARRAY CHECK_________\n";
	Array<int> a(10);
	for (int i = 0; i < 10; i++)
	{
		a[i] = i + 5;
		std::cout << a[i] << std::endl;
	}
	std:: cout << "a size: " << a.size() << std::endl;
	std::cout << "___________ASSIGN CHECK_________\n";
	Array<int> b;
	b = a;
	for (int i = 0; i < 10; i++)
		std::cout << b[i] << std::endl;
	std:: cout << "b size: " << b.size() << std::endl;
	std::cout << "___________ASSIGN CHECK FOR NOT CHANGING_________\n";
	for (int i = 0; i < 10; i++)
	{
		a[i] = i + 10;
		std::cout << "a[" << i << "]: " << a[i] << std::endl;
	}
	std:: cout << std::endl;
	for (int i = 0; i < 10; i++)
		std::cout << "b[" << i << "]: " << b[i] << std::endl;
	std:: cout << "b size: " << b.size() << std::endl;
}

void	testException()
{
	std::cout << "___________OUT OF RANGE TEST_________\n";
	try
	{
		Array<int> a(20);
		std::cout << a[21] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception has been caught!" << std::endl;
	}
}

int	main()
{
	srand(time(NULL));
	testCommonCases();
	testException();
	testAdvanced();
	// while (1);
	return (0);
}

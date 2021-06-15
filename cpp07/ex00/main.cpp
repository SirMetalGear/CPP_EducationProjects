/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 11:09:49 by mlorette          #+#    #+#             */
/*   Updated: 2021/05/04 11:21:06 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "whatever.hpp"

class Example
{
private:
	std::string	name;
public:
	Example(std::string name) : name(name) {}
	std::string	&getName() { return (this->name); }
	~Example() {}
};

	std::ostream &operator << (std::ostream &out, Example &obj) {
		out << "Hey it's me " << obj.getName() << "!";
		return (out);
	}

class Wow
{
private:
	int	_n;
public:
	Wow(int n) : _n(n) {}
	bool	operator == (Wow const &rhs) const { return (this->_n == rhs._n); }
	bool	operator != (Wow const &rhs) const { return (this->_n != rhs._n); }
	bool	operator > (Wow const &rhs) const { return (this->_n > rhs._n); }
	bool	operator < (Wow const &rhs) const { return (this->_n < rhs._n); }
	bool	operator >= (Wow const &rhs) const { return (this->_n >= rhs._n); }
	bool	operator <= (Wow const &rhs) const { return (this->_n <= rhs._n); }
	~Wow() {}
};

// void	test1()
// {
// 	int a = 2;
// 	int b = 3;
// 	::swap( a, b );
// 	std::cout << "a = " << a << ", b = " << b << std::endl;
// 	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
// 	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
// 	std::string c = "chaine1";
// 	std::string d = "chaine2";
// 	::swap(c, d);
// 	std::cout << "c = " << c << ", d = " << d << std::endl;
// 	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
// 	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
// }

void	test2()
{
	Example *a = new Example("Mario");
	Example *b = new Example("Giorgio Giovanni");
	std::cout << "ADDRESS a: " << *(&a) << " ADDRESS b: " << *(&b) << std::endl;
	std::cout << *a << std::endl;
	std::cout << *b << std::endl;
	swap(a, b);
	std::cout << "ADDRESS a: " << *(&a) << " ADDRESS b: " << *(&b) << std::endl;
	std::cout << *a << std::endl;
	std::cout << *b << std::endl;
	std::cout << "Object " << min(a, b)->getName()
	<< " is smaller or equal to " << max(a, b)->getName() << std::endl;
	delete a;
	delete b;
}

// void	test3()
// {
// 	Wow a(5);
// 	Wow b(10);
// 	std::cout << "ADDRESS a: " << &a << " ADDRESS b: " << &b << std::endl;
// 	if (a > b)
// 		std::cout << "a > b\n";
// 	if (a < b)
// 		std::cout << "a < b\n";
// 	if (a != b)
// 		std::cout << "a != b\n";
// 	if (a == b)
// 		std::cout << "a == b\n";
// 	if (a >= b)
// 		std::cout << "a >= b\n";
// 	if (a <= b)
// 		std::cout << "a <= b\n";
// 	swap(a, b);
// 	std::cout << "ADDRESS a: " << &a << " ADDRESS b: " << &b << std::endl;
// 	if (a > b)
// 		std::cout << "a > b\n";
// 	if (a < b)
// 		std::cout << "a < b\n";
// 	if (a != b)
// 		std::cout << "a != b\n";
// 	if (a == b)
// 		std::cout << "a == b\n";
// 	if (a >= b)
// 		std::cout << "a >= b\n";
// 	if (a <= b)
// 		std::cout << "a <= b\n";
// }

int main( void ) {
	// test1();
	test2();
	// test3();
	return 0;
}
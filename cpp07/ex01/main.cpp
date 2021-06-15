/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 19:36:54 by mlorette          #+#    #+#             */
/*   Updated: 2021/05/04 14:43:32 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

class Lol
{
private:
	int const	_n;
public:
	Lol() : _n(42) {}
	int get(void) const { return this->_n; }
	~Lol() {}
};

std::ostream &operator << (std::ostream &out, Lol const &obj) {
	out << obj.get();
	return (out);
}

template<typename T>
int	print(T const &a)
{
	std::cout << a << std::endl;
	return 0;
}

void	test()
{
	int b[] = {0, 1, 2, 3, 4};
	iter<int, int>(b, 5, print);

	Lol c[5];
	::iter<Lol, int>((c, 5, print);
}

int	main()
{
	test();
	while (1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 10:31:12 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/30 19:29:35 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <exception>
#include <limits>

class Converter
{
private:
	std::string	str;
	int			int_num;
	float		float_num;
	double		double_num;
	char		symb;
	int			nanf;
	int			dot;
	Converter();
public:
	Converter(const char *str);
	Converter(Converter &obj);
	Converter &operator = (Converter &obj);
	~Converter();
	void	print();
	void	parser();
	int		check_type();
};




#endif
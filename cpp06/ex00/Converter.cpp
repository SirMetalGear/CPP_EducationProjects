/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 10:31:01 by mlorette          #+#    #+#             */
/*   Updated: 2021/05/06 12:39:58 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter()
{}

Converter::Converter(const char *str)
{
	this->str = str;
	this->nanf = 0;
	this->dot = 0;
	this->int_num = 0;
	this->float_num = 0;
	this->double_num = 0;
	this->symb = 0;
	parser();
}

Converter::~Converter()
{}

Converter::Converter(Converter &obj)
{
	*this = obj;
}

Converter &Converter::operator = (Converter &obj)
{
	if (this == &obj)
		return (*this);
	this->str = obj.str;
	this->nanf = obj.nanf;
	this->dot = obj.dot;
	this->int_num = obj.int_num;
	this->float_num = obj.float_num;
	this->double_num = obj.double_num;
	this->symb = obj.symb;
	return (*this);
}

int		Converter::check_type()
{
	int	dot_flag = 0;
	int	float_flag = 0;
	int	minus_flag = 0;
	int	plus_flag = 0;
	int	i = -1;
	int	j = 0;

	if (str.length() == 1)
	{
		if (str[0] >= '0' && str[0] <= '9')
			return (2);
		if (str[0] >= 32 && str[0] < 127)
			return (1);
	}
	if (str == "inff" || str == "+inff" || str == "-inff" || str == "nanf")
	{
		nanf = 1;
		return (3);
	}
	if (str == "inf" || str == "+inf" || str == "-inf" || str == "nan")
	{
		nanf = 1;
		return (4);
	}
	while (str[++i])
	{
		if (isdigit(str[i]) != 0)
			j++;
		if (str[i] == '.')
		{
			if (dot_flag > 0)
				throw std::invalid_argument("ARGUMENT ERROR");
			int z = i + 1;
			while (str[z] == '0')
				z++;
			if (!((str[z] == 'f' && str[z + 1] == '\0') || (str[z] == '\0')))
				dot = 1;
			dot_flag++;
		}
		if (str[i] == 'f' && str[i + 1] == '\0')
			float_flag = 1;
		if (str[i] == '-')
		{
			if (minus_flag > 0 || plus_flag > 0)
				throw std::invalid_argument("ARGUMENT ERROR");
			j++;
			minus_flag++;
		}
		if (str[i] == '+')
		{
			if (minus_flag > 0 || plus_flag > 0)
				throw std::invalid_argument("ARGUMENT ERROR");
			j++;
			plus_flag++;
		}
	}
	if (i == j)
		return (2);
	if (dot_flag == 1 && float_flag == 1 && j == i - 2)
		return (3);
	if (dot_flag == 1 && j == i - 1)
		return (4);
	throw std::invalid_argument("NO SUITABLE TYPE");
	return (0);
}

void	Converter::parser()
{
	int	type;

	type = check_type();
	if (type == 1)
	{
		symb = str[0];
		int_num = static_cast<int>(symb);
		float_num = static_cast<float>(symb);
		double_num = static_cast<double>(symb);
	}
	else if (type == 2)
	{
		int_num = std::stoi(str);
		symb = static_cast<int>(int_num);
		float_num = static_cast<float>(int_num);
		double_num = static_cast<double>(int_num);
	}
	else if (type == 3)
	{
		float_num = std::stof(str);
		symb = static_cast<char>(float_num);
		int_num = static_cast<int>(float_num);
		double_num = static_cast<double>(float_num);
	}
	else
	{
		double_num =  std::stod(str);
		symb = static_cast<char>(double_num);
		int_num =static_cast<int>(double_num);
		float_num = static_cast<float>(double_num);
	}
	print();
}

void	Converter::print()
{
	if (symb >= 32 && symb < 127)
		std::cout << "char: '" << symb << "'" << std::endl;
	else if (int_num >= CHAR_MIN && int_num <= CHAR_MAX && nanf == 0)
		std::cout << "char: Non dispayable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
	if (nanf == 0 && double_num <= INT_MAX && double_num >= INT_MIN)
		std::cout << "int: " << int_num << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	if (nanf == 1 || dot == 1)
		std::cout << "float: " << float_num << "f" << std::endl;
	else
		std::cout << "float: " << float_num << ".0f" << std::endl;
	if (nanf == 1 || dot == 1)
		std::cout << "double: " << double_num << std::endl;
	else
		std::cout << "double: " << double_num << ".0" << std::endl;
}

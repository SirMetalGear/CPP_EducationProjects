/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 10:32:05 by mlorette          #+#    #+#             */
/*   Updated: 2021/05/29 03:37:48 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	this->fixedPointValue = 0;
}

Fixed::Fixed(const int raw)
{
	std::cout << "Int constructor called\n";
	this->fixedPointValue = raw << this->fract;
}

Fixed::Fixed(const float raw)
{
	std::cout << "Float constructor called\n";
	this->fixedPointValue = roundf(raw * (1 << this->fract));
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called\n";
	*this = obj;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int		Fixed::toInt(void) const
{
	return (this->fixedPointValue >> this->fract);
}

float	Fixed::toFloat(void) const
{
	return (this->fixedPointValue / (float)(1 << this->fract));
}

int		Fixed::getRawBits(void) const
{
	return (this->fixedPointValue);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	this->fixedPointValue = raw;
}

Fixed 	&Fixed::operator = (const Fixed &obj)
{
	std::cout << "Assignation operator called\n";
	if (this == &obj)
		return (*this);
	this->fixedPointValue = obj.getRawBits();
	return *this;
}

std::ostream &operator << (std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return (out);
}

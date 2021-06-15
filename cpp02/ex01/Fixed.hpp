/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 10:32:10 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/19 13:10:59 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>
# include <sstream>
# include <cmath>

class Fixed
{
private:
	int					fixedPointValue;
	static const int	fract = 8;
public:
	Fixed();
	Fixed(const Fixed &obj);
	Fixed(const int raw);
	Fixed(const float raw);

	~Fixed();

	int			toInt(void) const;
	float		toFloat(void) const;
	int			getRawBits(void) const;
	void		setRawBits(int const raw);

	Fixed		&operator = (const Fixed &obj);
};

	std::ostream	&operator << (std::ostream &ss, const Fixed &obj);

#endif

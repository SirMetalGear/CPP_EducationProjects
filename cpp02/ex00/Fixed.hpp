/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 10:32:10 by mlorette          #+#    #+#             */
/*   Updated: 2021/05/29 03:21:19 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>

class Fixed
{
private:
	int					fixedPointValue;
	static const int	literal = 8;
public:
	Fixed();
	Fixed(const Fixed &obj);
	~Fixed();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	Fixed	&operator = (const Fixed &obj);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 19:55:02 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/21 11:21:02 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

class	ICharacter;
# include "ICharacter.hpp"

class AMateria
{
private:
	unsigned int	_xp;
	std::string		_type;
public:
	AMateria(std::string const & type);
	AMateria();
	virtual ~AMateria();

	std::string const & getType() const;
	unsigned int getXP() const;

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif

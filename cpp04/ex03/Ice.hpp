/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 20:11:55 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/20 22:14:20 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include <iostream>
# include <string>

class Ice : public AMateria
{
private:
	unsigned int	_xp;
	std::string		_type;
public:
	Ice(std::string const & type);
	Ice();
	Ice(const Ice &obj);
	Ice	&operator = (const Ice &obj);
	virtual ~Ice();

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif

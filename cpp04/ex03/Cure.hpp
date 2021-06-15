/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 20:42:13 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/20 22:14:13 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include <iostream>
# include <string>

class Cure : public AMateria
{
private:
	unsigned int	_xp;
	std::string		_type;
public:
	Cure(std::string const & type);
	Cure();
	Cure(const Cure &obj);
	Cure	&operator = (const Cure &obj);
	virtual ~Cure();

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif

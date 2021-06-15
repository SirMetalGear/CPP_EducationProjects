/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ChainSawMagic.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 12:20:49 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/21 12:21:40 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHAINSAWMAGIC_HPP
# define CHAINSAWMAGIC_HPP

# include "AMateria.hpp"
# include <iostream>
# include <string>

class ChainsawMagic : public AMateria
{
private:
	unsigned int	_xp;
	std::string		_type;
public:
	ChainsawMagic(std::string const & type);
	ChainsawMagic();
	ChainsawMagic(const ChainsawMagic &obj);
	ChainsawMagic	&operator = (const ChainsawMagic &obj);
	virtual ~ChainsawMagic();

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif

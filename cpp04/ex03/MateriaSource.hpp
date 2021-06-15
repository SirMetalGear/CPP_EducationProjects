/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 21:21:08 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/21 12:57:47 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include <iostream>
# include <string>

class MateriaSource : public IMateriaSource
{
private:
	int				count;
	AMateria		*materia[5];
public:
	// MateriaSource(std::string const & type);
	MateriaSource();
	MateriaSource(const MateriaSource &obj);
	MateriaSource	&operator = (const MateriaSource &obj);
	virtual ~MateriaSource();

	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);
};

#endif

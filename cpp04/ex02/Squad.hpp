/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 15:26:59 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/20 18:01:47 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"
# include <string>
# include <iostream>

class Squad : public ISquad
{
private:
	int				unitNum;
	ISpaceMarine	**units;
public:
	Squad();
	Squad(const Squad &obj);
	Squad &operator = (const Squad &obj);
	virtual ~Squad();

	virtual int getCount() const;
	virtual ISpaceMarine* getUnit(int) const;
	virtual int push(ISpaceMarine*);
};

#endif

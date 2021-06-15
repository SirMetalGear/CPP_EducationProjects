/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 18:55:54 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/19 18:56:22 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"
# include <string>
# include <iostream>

class PowerFist : public AWeapon
{
public:
	PowerFist();
	PowerFist(const PowerFist &obj);
	virtual ~PowerFist();
	PowerFist	&operator = (const PowerFist &obj);

	virtual void attack() const;
};

#endif

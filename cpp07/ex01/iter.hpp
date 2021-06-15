/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 19:30:57 by mlorette          #+#    #+#             */
/*   Updated: 2021/05/04 14:34:19 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template< typename T, typename F >
void	iter(T *addr, int array_length, F (*op)(T const &obj)) {
	for (int i = 0; i < array_length; i++)
		op(addr[i]);
}

#endif

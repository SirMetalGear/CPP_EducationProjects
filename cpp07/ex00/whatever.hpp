/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 14:00:36 by mlorette          #+#    #+#             */
/*   Updated: 2021/05/04 11:20:07 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap(T *a, T *b) {
	if (&a != &b)
	{
		T *tmp = a;
		a = b;
		b = tmp;
	}
}

template<typename T>
T const	&min(T const &a, T const &b) {
	if (b <= a)
		return (b);
	return (a);
}

template<typename T>
T const	&max(T const &a, T const &b) {
	if (b >= a)
		return (b);
	return (a);
}

#endif

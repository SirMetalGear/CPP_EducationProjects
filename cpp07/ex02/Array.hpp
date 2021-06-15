/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 21:46:30 by mlorette          #+#    #+#             */
/*   Updated: 2021/05/02 13:44:40 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <string>
#include <iostream>

template<class T>
class Array
{
private:
	T *_array;
	size_t	_n;
public:
	Array<T>(void) : _array(0), _n(0) {}
	Array<T>(unsigned int n) {
		if (n == 0)
			_array = 0;
		else
			_array = new T[n];
		_n = n;
	}

	Array<T>(Array & obj) {
		*this = obj;
	}

	T	&operator [] (const size_t index) {
		if (_n == 0 || index < 0 || index > _n)
			throw std::exception();
		return (_array[index]);
	}

	Array <T> &operator = (Array <T> & obj) {
		if (this == &obj)
			return (*this);
		delete [] this->_array;
		this->_array = new  T[obj._n];
		for (size_t i = 0; i < obj._n; i++)
			this->_array[i] = obj._array[i];
		_n = obj._n;
		return (*this);
	}

	~Array<T>() {
		delete [] this->_array;
	}

	size_t size();
};

template <typename T>
size_t Array<T>::size() { return _n; }

#endif

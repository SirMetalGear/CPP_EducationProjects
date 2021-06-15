/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 14:11:25 by mlorette          #+#    #+#             */
/*   Updated: 2021/05/04 22:43:24 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <vector>

template<class T>
class MutantStack : public std::stack<T>
{
private:
	T	*beginIterator;
	T	*endIterator;
	int	flag;
public:
	class iterator
	{
	private:
		T	*pointer;
	public:
		iterator() : pointer(0) {}
		iterator(T *point) : pointer(point) {}
		~iterator() { pointer = 0; }
		iterator &operator ++ () {
			pointer++;
			return (*this);
		}
		iterator &operator -- () {
			pointer--;
			return (*this);
		}
		bool	operator != (iterator &obj) {
			return (pointer != obj.pointer);
		}
		bool	operator == (iterator &obj) {
			return (pointer == obj.pointer);
		}
		T &operator * () {
			return (*pointer);
		}
	};
	
	MutantStack() : std::stack<T>() {
		flag = 0;
	}

	MutantStack(const MutantStack &obj) : std::stack<T>(obj) {
		*this = obj;
	}

	MutantStack &operator = (const MutantStack &obj) {
		if (this == &obj)
			return (*this);
		flag = obj.flag;
		beginIterator = obj.beginIterator;
		endIterator = obj.endIterator;
		return (*this);
	}

	virtual ~MutantStack() {}

	virtual void	push(T const &obj) {
		std::stack<T>::push(obj);
		if (flag == 0)
		{
			beginIterator = &std::stack<T>::top();
			endIterator = &std::stack<T>::top();
			flag = 1;
		}
		else
		{
			endIterator = &std::stack<T>::top();
		}
	}
	
	T *begin() {
		return (beginIterator);
	}

	T *end() {
		return (endIterator + 1);
	}
};

#endif

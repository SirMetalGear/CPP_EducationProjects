/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 12:21:26 by mlorette          #+#    #+#             */
/*   Updated: 2021/05/20 18:05:54 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
# define CONTACTS_HPP
# include <iostream>
# include <iomanip>

class PhoneBook {
    private:
		std::string contacts[8][10];
		std::string	fill_name[10];
		int			iterator;
    public:
		PhoneBook();
		~PhoneBook();
		std::string	get_data();
		int			fill_contact();
		void		show_data();
		void		show_all(int n);
};

#endif

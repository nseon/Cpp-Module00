/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:32:59 by nseon             #+#    #+#             */
/*   Updated: 2025/10/17 15:05:02 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class Phonebook {
	private:
		Contact	_contacts[8];
		int8_t	_nb_contacts = 0;
	public:
		void show_contacts();
		void show_contact(int i);
		void add_contact(Contact contact);
		std::string static resize(std::string);
		int	getNb_contacts();
};

#endif
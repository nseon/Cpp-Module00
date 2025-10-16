/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:47:51 by nseon             #+#    #+#             */
/*   Updated: 2025/10/16 11:08:03 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

#include "Phonebook.hpp"

void Phonebook::add_contact(Contact contact)
{
	if (_nb_contacts < 8)	
	{
		_contacts[_nb_contacts] = contact;
		_nb_contacts++;
	}
	else
	{
		for (int8_t i = 0; i < 8; i++)
			_contacts[i] = _contacts[i + 1];
		_contacts[_nb_contacts] = contact;
	}
	contact.show();
}

void Phonebook::show_contacts()
{
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|        Id|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int32_t i = 0; i < 8; i++)
	{
		std::cout << "|" << std::setw(5) << i << "|";
		std::cout << 
	}
}

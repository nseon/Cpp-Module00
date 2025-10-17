/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:47:51 by nseon             #+#    #+#             */
/*   Updated: 2025/10/17 16:14:26 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

#include "Phonebook.hpp"

std::string Phonebook::resize(std::string str)
{
	std::string	new_str;

	new_str = str.substr(0, 10);
	if (str.size() > 10)
		new_str[new_str.size() - 1] = '.';
	return (new_str);
}

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
}

void Phonebook::show_contact(int i)
{
	_contacts[i].show();
}

void Phonebook::show_contacts()
{
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|        Id|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < _nb_contacts; i++)
	{
		std::cout << "|" << std::setw(10) << i << "|";
		std::cout << std::setw(10) << resize(_contacts[i].getFirst_name()) << "|";
		std::cout << std::setw(10) << resize(_contacts[i].getLast_name()) << "|";
		std::cout << std::setw(10) << resize(_contacts[i].getNickname()) << "|" << std::endl;
	}	
	std::cout << "|-------------------------------------------|" << std::endl;
}

/* --------------GET-------------- */

int	Phonebook::getNb_contacts()
{
	return (_nb_contacts);
}

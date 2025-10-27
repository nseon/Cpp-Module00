/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:25:25 by nseon             #+#    #+#             */
/*   Updated: 2025/10/27 10:58:19 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>

#include "Phonebook.hpp"

int	get_input(std::string msg, std::string &input)
{
	while (!input.length())
	{
		std::cout << msg;
		std::getline(std::cin, input);
		if (std::cin.eof())
			return (-1);
	}
	return (0);
}

int create_contact(Contact &contact)
{
	std::string	input;

	if (get_input("First name: ", input) == -1)
		return (-1);
	contact.setFirst_name(input);
	input.clear();
	if (get_input("Last name: ", input) == -1)
		return (-1);
	contact.setLast_name(input);
	input.clear();
	if (get_input("Nickname: ", input) == -1)
		return (-1);
	contact.setNickname(input);
	input.clear();
	if (get_input("Phone number: ", input) == -1)
		return (-1);
	contact.setPhone_number(input);
	input.clear();
	if (get_input("Darkest secret: ", input) == -1)
		return (-1);
	contact.setDarkest_secret(input);
	return (0);
}

void	search(Phonebook &phonebook)
{
	int	input;
	
	std::cout << "Enter contact id: ";
	std::cin >> input;
	if (std::cin.fail())
	{
		if (std::cin.eof())
			exit(EXIT_FAILURE);
		std::cout << "Invalid format, need a number" << std::endl;
		std::cin.clear(std::ios_base::goodbit);
		std::cin.ignore();
	}
	else if ( 0 < input + 1 && input + 1 <= phonebook.getNb_contacts())
		phonebook.show_contact(input);
	else
		std::cout << "Invalid id" << std::endl;
}

int	main()
{
	Phonebook	phonebook;
	std::string	input;
	Contact		new_contact;

	phonebook.setNb_contacts(0);
	while (!std::cin.eof() && input.compare("EXIT"))
	{
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			if (create_contact(new_contact) == -1)
				return (-1);
			phonebook.add_contact(new_contact);
		}
		if (input == "SEARCH")
		{
			phonebook.show_contacts();
			search(phonebook);
		}
	}
	return (0);
}

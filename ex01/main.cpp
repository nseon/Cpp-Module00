/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:25:25 by nseon             #+#    #+#             */
/*   Updated: 2025/10/20 14:39:28 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

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

Contact create_contact()
{
	Contact contact;
	std::string	input;

	if (get_input("First name: ", input) == -1)
		exit(EXIT_FAILURE);
	contact.setFirst_name(input);
	input.clear();
	if (get_input("Last name: ", input) == -1)
		exit(EXIT_FAILURE);
	contact.setLast_name(input);
	input.clear();
	if (get_input("Nickname: ", input) == -1)
		exit(EXIT_FAILURE);
	contact.setNickname(input);
	input.clear();
	if (get_input("Phone number: ", input) == -1)
		exit(EXIT_FAILURE);
	contact.setPhone_number(input);
	input.clear();
	if (get_input("Darkest secret: ", input) == -1)
		exit(EXIT_FAILURE);
	contact.setDarkest_secret(input);
	return (contact);
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

	while (!std::cin.eof() && input.compare("EXIT"))
	{
		std::getline(std::cin, input);
		if (input == "ADD")
			phonebook.add_contact(create_contact());
		if (input == "SEARCH")
		{
			phonebook.show_contacts();
			search(phonebook);
		}
	}
	return (0);
}
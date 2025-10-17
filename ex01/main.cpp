/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:25:25 by nseon             #+#    #+#             */
/*   Updated: 2025/10/17 16:13:51 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "Phonebook.hpp"

Contact create_contact()
{
	Contact contact;
	std::string	input;

	std::cout << "First name: ";
	std::getline(std::cin, input);
	contact.setFirst_name(input);
	std::cout << "Last name: ";
	std::getline(std::cin, input);
	contact.setLast_name(input);
	std::cout << "Nickname: ";
	std::getline(std::cin, input);
	contact.setNickname(input);
	std::cout << "Phone number: ";
	std::getline(std::cin, input);
	contact.setPhone_number(input);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, input);
	contact.setDarkest_secret(input);
	return (contact);
}

void	search(Phonebook &phonebook)
{
	int32_t	input;
	
	std::cout << "Enter contact id: ";
	std::cin >> input;
	if (std::cin.fail())
	{
		std::cout << "Invalid format, need a number" << std::endl;
		std::cin.clear(std::ios_base::goodbit);
		std::cin.ignore();
	}
	else if (input + 1 <= phonebook.getNb_contacts())
		phonebook.show_contact(input);
	else
		std::cout << "Invalid id" << std::endl;
}

int	main()
{
	Phonebook	phonebook;
	std::string	input;

	while (!std::cin.fail() && input.compare("EXIT"))
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:32:55 by nseon             #+#    #+#             */
/*   Updated: 2025/10/17 10:16:16 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Contact.hpp"

void Contact::show()
{
	std::cout << "First name: " << _first_name << std::endl;
	std::cout << "Last name: " << _last_name << std::endl;
	std::cout << "Nickname: " << _nickname << std::endl;
	std::cout << "Phone number: " << _phone_number << std::endl;
	std::cout << "Darkest secret: " << _darkest_secret << std::endl;
}

/* --------------SET-------------- */

void Contact::setFirst_name(const std::string &str)
{
	_first_name = str;
}

void Contact::setLast_name(const std::string &str)
{
	_last_name = str;
}

void Contact::setNickname(const std::string &str)
{
	_nickname = str;
}
void Contact::setPhone_number(const std::string &str)
{
	_phone_number = str;
}
void Contact::setDarkest_secret(const std::string &str)
{
	_darkest_secret = str;
}

/* --------------GET-------------- */

std::string Contact::getFirst_name()
{
	return (_first_name);
}

std::string Contact::getLast_name()
{
	return (_last_name);
}

std::string Contact::getNickname()
{
	return (_nickname);
}

std::string Contact::getPhone_number()
{
	return (_phone_number);
}

std::string Contact::getDarkest_secret()
{
	return (_darkest_secret);
}
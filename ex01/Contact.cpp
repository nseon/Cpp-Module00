/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:32:55 by nseon             #+#    #+#             */
/*   Updated: 2025/10/14 17:19:20 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Contact.hpp"

void Contact::setFirst_name(const std::string &str)
{
	this->first_name = str;
}

void Contact::setLast_name(const std::string &str)
{
	this->last_name = str;
}

void Contact::setNickname(const std::string &str)
{
	this->nickname = str;
}
void Contact::setPhone_number(const std::string &str)
{
	this->phone_number = str;
}
void Contact::setDarkest_secret(const std::string &str)
{
	this->darkest_secret = str;
}

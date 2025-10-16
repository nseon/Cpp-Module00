/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:58:38 by nseon             #+#    #+#             */
/*   Updated: 2025/10/16 10:28:48 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact {
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;
	public:
		void setFirst_name(const std::string &str);
		void setLast_name(const std::string &str);
		void setNickname(const std::string &str);
		void setPhone_number(const std::string &str);
		void setDarkest_secret(const std::string &str);
		void show();
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:58:38 by nseon             #+#    #+#             */
/*   Updated: 2025/10/14 17:14:06 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Contact {
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	public:
		void setFirst_name(const std::string &str);
		void setLast_name(const std::string &str);
		void setNickname(const std::string &str);
		void setPhone_number(const std::string &str);
		void setDarkest_secret(const std::string &str);
};

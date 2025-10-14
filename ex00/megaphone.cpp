/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 10:54:23 by nseon             #+#    #+#             */
/*   Updated: 2025/10/14 09:25:56 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	print_args(int argc, char **argv)
{
	std::string str;

	for (int i = 1; i < argc; i++)
	{
		str = argv[i];
		for (std::string::iterator i=str.begin(); i != str.end(); ++i)
			*i = toupper(*i);
		std::cout << str;
	}
	std::cout << "\n";
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
		print_args(argc, argv);
	return (0);
}
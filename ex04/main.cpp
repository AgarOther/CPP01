/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 14:23:51 by scraeyme          #+#    #+#             */
/*   Updated: 2024/12/30 14:35:40 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "colors.hpp"

bool args_valid(int ac)
{
	if (ac == 1 || ac > 4)
		std::cout << RED << "[Error] You need 3 arguments: filename, word to replace, and its replacement." << std::endl;
	else if (ac == 2)
		std::cout << RED << "[Error] Missing 2 arguments: word to replace and its replacement." << std::endl;
	else if (ac == 3)
		std::cout << RED << "[Error] Missing 1 argument: the replacement for the specified word." << std::endl;
	else
		return true;
	return false;
}

int	main(int ac, char **av)
{
	if (!args_valid(ac))
		return (1);
	(void)av;
}

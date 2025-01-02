/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 23:36:14 by scraeyme          #+#    #+#             */
/*   Updated: 2025/01/03 00:36:01 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	std::string level;
	Harl	harl;

	if (ac != 2)
	{
		std::cout << RED << "[Error] You need to specify a warning level (DEBUG | INFO | WARNING | ERROR)." << RESET << std::endl;
		return (1);
	}
	harl.complain(av[1]);
}

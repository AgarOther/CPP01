/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 23:36:32 by scraeyme          #+#    #+#             */
/*   Updated: 2025/03/12 13:05:31 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{

}

Harl::~Harl(void)
{
	
}

void	Harl::debug(void)
{
	std::cout << MAGENTA << "[DEBUG] I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. ";
	std::cout << "I really do!" << RESET << std::endl;
}

void	Harl::info(void)
{
	std::cout << BLUE << "[INFO] I cannot believe adding extra bacon costs more money.";
	std::cout << "You didn\'t put enough bacon in my burger! If you did, I wouldn\'t be asking for more!" << RESET << std::endl;
}

void	Harl::warning(void)
{
	std::cout << YELLOW << "[WARNING] I think I deserve to have some extra bacon for free. ";
	std::cout << "I\'ve been coming for years whereas you started working here since last month." << RESET << std::endl;
}

void	Harl::error(void)
{
	std::cout << RED << "[ERROR] This is unacceptable! I want to speak to the manager now." << RESET << std::endl;
}

int	get_level(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
			return (i);
	}
	return (-1);
}

void	Harl::complain(std::string level)
{
	int	lvl;

	lvl = get_level(level);
	switch (lvl)
	{
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
			break ;
		default:
			std::cout << BOLD_RED << "[NOT_FOUND] What is this?? Why is my complaint not getting taken care of? ";
			std::cout << "That's it I'll call my dad. Do you know who he is?" << RESET << std::endl;
			break ;
	}
}

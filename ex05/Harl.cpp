/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 23:36:32 by scraeyme          #+#    #+#             */
/*   Updated: 2025/01/30 14:24:51 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << GREEN << "Harl was born and is ready to complain!" << RESET << std::endl;
}

Harl::~Harl(void)
{
	std::cout << CYAN << "Harl finished complaining, for now..." << RESET << std::endl;
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

void	Harl::complain(std::string level)
{	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void(Harl::*functions[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
			return (this->*functions[i])();
	}
	std::cout << BOLD_RED << "[NOT_FOUND] What is this?? Why is my complaint not getting taken care of? ";
	std::cout << "That's it I'll call my dad. Do you know who he is?" << RESET << std::endl;
}
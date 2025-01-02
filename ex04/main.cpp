/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 14:23:51 by scraeyme          #+#    #+#             */
/*   Updated: 2025/01/02 23:30:33 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include "colors.hpp"

bool args_valid(int ac)
{
	if (ac == 1 || ac > 4)
		std::cout << RED << "[Error] You need 3 arguments: filename, word to replace, and its replacement." << RESET << std::endl;
	else if (ac == 2)
		std::cout << RED << "[Error] Missing 2 arguments: word to replace and its replacement." << RESET << std::endl;
	else if (ac == 3)
		std::cout << RED << "[Error] Missing 1 argument: the replacement for the specified word." << RESET << std::endl;
	else
		return true;
	return false;
}

std::string	replace_str(std::string &str, const std::string &word, const std::string &replacement)
{
	unsigned long long	index = 0;

	do {
		index = str.find(word, index);
		if (index != std::string::npos)
		{
			str = str.substr(0, index) + replacement + str.substr(index + word.length(), str.size());
			index += replacement.length();
		}
	} while (index != std::string::npos);
	return (str);
}

int	main(int ac, char **av)
{
	std::string		filename;
	std::string		word;
	std::string		replacement;
	std::string		buffer;
	std::ifstream	file;
	std::ofstream	new_file;

	// Parsing
	if (!args_valid(ac))
		return (1);
	filename = av[1];
	word = av[2];
	replacement = av[3];
	if (word == "" || replacement == "")
	{
		std::cout << RED << "[Error] Arguments can't be empty." << RESET << std::endl;
		return (1);
	}

	// File management
	file.open(filename.c_str(), std::ios::in);
	if (file.fail())
	{
		std::cout << RED << "[Error] Invalid file." << RESET << std::endl;
		return (2);
	}
	new_file.open((filename + ".replace").c_str());

	// Lines replacement
	while (std::getline(file, buffer))
	{
		buffer = replace_str(buffer, word, replacement);
		new_file << buffer << std::endl;
	}
	file.close();
	new_file.close();
}

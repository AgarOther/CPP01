/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 14:23:51 by scraeyme          #+#    #+#             */
/*   Updated: 2025/01/02 17:30:34 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
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

std::string	replace_str(std::string str, std::string word, std::string replacement)
{
	//std::string::npos
	//std::string::find()
	//Substr -> index + replacement + substr leftover
}

int	main(int ac, char **av)
{
	std::string		filename;
	std::string		word;
	std::string		replacement;
	std::string		buffer;
	std::ifstream	file;
	std::ofstream	new_file;

	if (!args_valid(ac))
		return (1);
	filename = av[1];
	word = av[2];
	replacement = av[3];

	file.open(filename.c_str(), std::ios::in);
	new_file.open((filename + ".replace").c_str());
	if (file.fail())
	{
		std::cout << "Invalid file." << std::endl;
		return (1);
	}

	while (std::getline(file, buffer))
	{
		buffer = replace_str(buffer, word, replacement);
		new_file << buffer << std::endl;
	}
	file.close();
	new_file.close();
}

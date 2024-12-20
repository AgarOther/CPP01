/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 23:15:30 by scraeyme          #+#    #+#             */
/*   Updated: 2024/12/20 23:50:50 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	// Variables
	std::string	brain_str = "HI THIS IS BRAIN";
	std::string *brain_ptr = &brain_str;
	std::string &brain_ref = brain_str;

	// Memory addresses
	std::cout << "\033[35;4;1m" << "*~*~* Memory Addresses *~*~*" << "\033[0m" << std::endl;
	std::cout << "\033[35;1m" << "Address of the string variable:   " << &brain_str << "\033[0m" << std::endl;
	std::cout << "\033[35;1m" << "Address of the string pointer:    " << brain_ptr << "\033[0m" << std::endl;
	std::cout << "\033[35;1m" << "Address of the string reference:  " << &brain_ref << "\033[0m" << std::endl << std::endl;

	// Values
	std::cout << "\033[32;4;1m" << "*~*~* Pointed values *~*~*" << "\033[0m" << std::endl;
	std::cout << "\033[32;1m" << "Value of the string variable:     " << brain_str << "\033[0m" << std::endl;
	std::cout << "\033[32;1m" << "Value of the string pointer:      " << *brain_ptr << "\033[0m" << std::endl;
	std::cout << "\033[32;1m" << "Value of the string reference:    " << brain_ref << "\033[0m" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 16:07:21 by scraeyme          #+#    #+#             */
/*   Updated: 2024/12/20 23:43:01 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	
}

Zombie::~Zombie(void)
{
	std::cout << "\033[31;49;1m" << this->_name << " died." << "\033[0m" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << "\033[32;49;1m" << this->_name << ": BraiiiiiiinnnzzzZ..." << "\033[0m" << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->_name = name;
}

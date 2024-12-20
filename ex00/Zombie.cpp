/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 16:07:21 by scraeyme          #+#    #+#             */
/*   Updated: 2024/12/20 16:45:15 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	
}

Zombie::~Zombie(void)
{
	std::cout << "\033[31;49;1m" << this->name << " died." << "\033[0m" << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

void Zombie::announce(void)
{
	std::cout << "\033[32;49;1m" << this->name << ": BraiiiiiiinnnzzzZ..." << "\033[0m" << std::endl;
}
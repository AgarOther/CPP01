/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 00:02:57 by scraeyme          #+#    #+#             */
/*   Updated: 2024/12/21 00:13:22 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

HumanB::~HumanB(void)
{
	std::cout << "\033[31;49;1m" << this->_name << " died :(" << "\033[0m" << std::endl;
}

void	HumanB::attack(void)
{
	std::cout << "\033[33;1m" << this->_name << " attacks with their " << this->_weapon->getType() << "\033[0m" << std::endl;
}

void	HumanB::setWeapon(Weapon weapon)
{
	this->_weapon = &weapon;
}
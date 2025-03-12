/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 00:02:57 by scraeyme          #+#    #+#             */
/*   Updated: 2025/03/12 15:34:34 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name)
{
	this->_name = name;
	this->_weapon = NULL;
}

HumanB::~HumanB(void)
{
	std::cout << "\033[31;49;1m" << this->_name << " died :(" << "\033[0m" << std::endl;
}

void	HumanB::attack(void) const
{
	std::cout << "\033[33;1m" << this->_name << " attacks with their " << (this->_weapon == NULL ? "NULL" : this->_weapon->getType()) << "\033[0m" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

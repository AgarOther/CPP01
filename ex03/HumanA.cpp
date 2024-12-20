/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 23:28:57 by scraeyme          #+#    #+#             */
/*   Updated: 2024/12/21 00:05:45 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _weapon(weapon)
{
	this->_name = name;
}

HumanA::~HumanA(void)
{
	std::cout << "\033[31;49;1m" << this->_name << " died :(" << "\033[0m" << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << "\033[33;1m" << this->_name << " attacks with their " << this->_weapon.getType() << "\033[0m" << std::endl;
}

void	HumanA::setWeapon(Weapon weapon)
{
	this->_weapon = weapon;
}

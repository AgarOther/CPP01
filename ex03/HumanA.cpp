/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 23:28:57 by scraeyme          #+#    #+#             */
/*   Updated: 2024/12/30 14:51:10 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon): _weapon(weapon)
{
	this->_name = name;
}

HumanA::~HumanA(void)
{
	std::cout << "\033[31;49;1m" << this->_name << " died :(" << "\033[0m" << std::endl;
}

void	HumanA::attack(void) const
{
	std::cout << "\033[33;1m" << this->_name << " attacks with their " << this->_weapon.getType() << "\033[0m" << std::endl;
}

void	HumanA::setWeapon(const Weapon &weapon)
{
	this->_weapon = weapon;
}

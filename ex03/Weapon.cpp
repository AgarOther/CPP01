/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 14:08:12 by scraeyme          #+#    #+#             */
/*   Updated: 2024/12/30 14:52:09 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type)
{
	this->_type = type;
}

Weapon::~Weapon()
{
	
}

std::string	Weapon::getType() const
{
	return this->_type;
}

void	Weapon::setType(const std::string &type)
{
	this->_type = type;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 16:07:25 by scraeyme          #+#    #+#             */
/*   Updated: 2024/12/20 16:41:54 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie 	mark("Mark");
	Zombie*	jack = new Zombie("Jack");

	jack->announce();
	mark.announce();
	randomChump("Tyler");
	delete(jack);
}
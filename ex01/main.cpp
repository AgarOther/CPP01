/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 16:07:25 by scraeyme          #+#    #+#             */
/*   Updated: 2024/12/20 23:50:33 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int			horde_size;
	std::string	name;
	Zombie 		*horde;

	horde_size = -10;
	if (horde_size < 1 || horde_size > 500)
	{
		std::cout << "\033[31;49;1m" << "Horde size is invalid! It must be betzeen 1 and 500." << "\033[0m" << std::endl;
		return (1);
	}
	name = "Pablo";
	horde = zombieHorde(horde_size, name);
	for (int i = 0; i < horde_size; i++)
		horde[i].announce();
	delete [] horde;
}

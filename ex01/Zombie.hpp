/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 16:07:28 by scraeyme          #+#    #+#             */
/*   Updated: 2024/12/20 23:42:52 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	private:
		std::string	_name;
	public:
		Zombie(void);
		~Zombie(void);
		void	announce(void);
		void	set_name(std::string name);
};

Zombie*	zombieHorde(int N, std::string name);

#endif
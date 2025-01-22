/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 23:36:37 by scraeyme          #+#    #+#             */
/*   Updated: 2025/01/22 18:54:06 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <string>
# include <iostream>
# define MAGENTA "\033[35;49m"
# define CYAN "\033[36;49m"
# define BLUE "\033[34;49m"
# define GREEN "\033[32;49m"
# define YELLOW "\033[33;49m"
# define RED "\033[31;49m"
# define BOLD_RED "\033[31;1m"
# define RESET "\033[0m"z

class Harl
{
	public:
		Harl(void);
		~Harl(void);
		void	complain(std::string level);
		//TODOvoid	;
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif

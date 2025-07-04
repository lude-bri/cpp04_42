/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 21:18:05 by lude-bri          #+#    #+#             */
/*   Updated: 2025/06/21 03:38:26 by luigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//LIBRARIES
#include <iostream>
#include "Brain.hpp"

//COLORS
# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define YELLOW  "\033[33m"
# define BLUE    "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN    "\033[36m"
# define RESET   "\033[0m"
# define BOLD    "\033[1m"
# define BLINK    "\033[5m" 
# define REVERSE  "\033[7m"

//CLASSES
class Animal {

protected:
	std::string	type;

public:
	Animal();
	Animal(const std::string &type);
	Animal(const Animal &copy);
	Animal &operator=(const Animal &copy);
	virtual ~Animal();

	virtual void	makeSound() const = 0;
	virtual std::string		getType() const = 0;
};

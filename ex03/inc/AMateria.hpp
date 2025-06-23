/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 17:09:22 by lude-bri          #+#    #+#             */
/*   Updated: 2025/06/21 18:00:00 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//LIBRARIES
#include <iostream>
#include <string>
#include "ICharacter.hpp"

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

//DEBUG
#ifdef DEBUG
# define DEBUG_MSG(x) std::cout << "[DEBUG] " << x << std::endl
#else
# define DEBUG_MSG(x)
#endif

class ICharacter;

class AMateria {

protected:
	std::string _type;

public:
	AMateria();
	AMateria(std::string const &type);
	AMateria(const AMateria &copy);
	AMateria &operator=(const AMateria &copy);
	virtual ~AMateria();

	std::string const &getType() const; //getter (Runs the materia type)

	virtual AMateria *clone() const = 0; //pure virtual function
	virtual void use(ICharacter &target); //virtual function
};


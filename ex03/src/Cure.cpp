/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 18:21:51 by lude-bri          #+#    #+#             */
/*   Updated: 2025/06/21 18:23:11 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cure.hpp"
#include <iostream>

//Default constructor
Cure::Cure() : AMateria("cure") {}

//Copy Constructor
Cure::Cure(const Cure &copy) : AMateria(copy) {}

//Copy Assignment Operator
Cure &Cure::operator=(const Cure &copy) {
	if (this != &copy)
		_type = copy._type;
	return *this;

	//I think I also could do
	//AMateria::operator=(copy);
	//return *this;
}

//Destructor
Cure::~Cure() {}

//clone method
AMateria *Cure::clone() const {
	return new Cure(*this); //return a new instance of the same type
}

//use method
void	Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

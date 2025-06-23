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
Cure::Cure() : AMateria("cure") {
	DEBUG_MSG("Cure default constructor was called");
}

//Copy Constructor
Cure::Cure(const Cure &copy) : AMateria(copy) {
	DEBUG_MSG("Cure copy constructor was called");
}

//Copy Assignment Operator
Cure &Cure::operator=(const Cure &copy) {
	DEBUG_MSG("Cure copy assignment operator was called");
	if (this != &copy)
		_type = copy._type;
	return *this;

	//I think I also could do
	//AMateria::operator=(copy);
	//return *this;
}

//Destructor
Cure::~Cure() {
	DEBUG_MSG("Cure destructor was called");
}

//clone method
AMateria *Cure::clone() const {
	DEBUG_MSG("Cure CLONE METHOD was called");
	return new Cure(*this); //return a new instance of the same type
}

//use method
void	Cure::use(ICharacter &target) {
	DEBUG_MSG("Cure USE METHOD was called");
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

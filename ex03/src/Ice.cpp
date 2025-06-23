/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 18:12:05 by lude-bri          #+#    #+#             */
/*   Updated: 2025/06/21 18:21:15 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Ice.hpp"
#include <iostream>

//Default constructor
Ice::Ice() : AMateria("ice") {
	DEBUG_MSG("Ice constructor was called");
}

//Copy Constructor
Ice::Ice(const Ice &copy) : AMateria(copy) {
	DEBUG_MSG("Ice copy constructor was called");
}

//Copy Assignment Operator
Ice &Ice::operator=(const Ice &copy) {
	DEBUG_MSG("Ice copy assignment operator was called");
	if (this != &copy)
		_type = copy._type;
	return *this;

	//I think I also could do
	//AMateria::operator=(copy);
	//return *this;
}

//Destructor
Ice::~Ice() {
	DEBUG_MSG("Ice destructor was called");
}

//clone method
AMateria *Ice::clone() const {
	DEBUG_MSG("Ice CLONE METHOD was called");
	return new Ice(*this); //return a new instance of the same type
}

//use method
void	Ice::use(ICharacter &target) {
	DEBUG_MSG("Ice USE METHOD was called");
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

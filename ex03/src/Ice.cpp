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

#ifdef DEBUG
	std::cout << "Ice constructor was called" << std::endl;
#endif
}

//Copy Constructor
Ice::Ice(const Ice &copy) : AMateria(copy) {}

//Copy Assignment Operator
Ice &Ice::operator=(const Ice &copy) {
	if (this != &copy)
		_type = copy._type;
	return *this;

	//I think I also could do
	//AMateria::operator=(copy);
	//return *this;
}

//Destructor
Ice::~Ice() {}

//clone method
AMateria *Ice::clone() const {
	return new Ice(*this); //return a new instance of the same type
}

//use method
void	Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

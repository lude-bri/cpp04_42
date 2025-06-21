/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 21:18:14 by lude-bri          #+#    #+#             */
/*   Updated: 2025/06/21 02:40:58 by luigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

//Default Constructor
Dog::Dog() : Animal("Dog"), brain(new Brain()) {
	std::cout << BLUE << "A Dog was created" << RESET << std::endl;
}

//Default copy constructor
Dog::Dog(const Dog &copy) : Animal(copy), brain(new Brain()) {
	std::cout << BLUE << "A copy of a Dog was created" << RESET << std::endl;
}

//Default copy assignment operator
Dog	&Dog::operator=(const Dog &copy) {
	if (this == &copy)
		return *this;

	Animal::operator=(copy); //copio a parte Animal
	*brain = *copy.brain; //copio o brain (usando operator= do Brain)
	return (*this);
}

//Default destructor
Dog::~Dog() {
	delete brain;
	std::cout << BLUE << "A Dog was destroyed" << RESET << std::endl;
}

void	Dog::makeSound() const {
	std::cout << BLUE << "Woof!" << RESET << std::endl;
}

std::string	Dog::getType() const {return type;}

Brain	&Dog::getBrain() {return *brain;}

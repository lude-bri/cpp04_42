/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 21:18:08 by lude-bri          #+#    #+#             */
/*   Updated: 2025/06/21 02:40:50 by luigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

//Default Constructor
Cat::Cat() : Animal("Cat"), brain(new Brain()) {
	std::cout << YELLOW << "A Cat was created" << RESET << std::endl;
}

//Default copy constructor
Cat::Cat(const Cat &copy) : Animal(copy), brain(new Brain()) {
	std::cout << YELLOW << "A copy of a Cat was created" << RESET << std::endl;
}

//Default copy assignment operator
Cat	&Cat::operator=(const Cat &copy) {
	if (this == &copy)
		return *this;

	Animal::operator=(copy);
	*brain = *copy.brain;
	return (*this);
}

//Default destructor
Cat::~Cat() {
	delete brain;
	std::cout << YELLOW << "A Cat was destroyed" << RESET << std::endl;
}

void	Cat::makeSound() const {
	std::cout << YELLOW << "Meow" << RESET << std::endl;
}

std::string	Cat::getType() const {return type;}

Brain	&Cat::getBrain() {return *brain;}

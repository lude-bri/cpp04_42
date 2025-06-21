/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 21:18:00 by lude-bri          #+#    #+#             */
/*   Updated: 2025/06/21 02:45:01 by luigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

//Default Constructor
Animal::Animal() {
	type = "Animal";
	std::cout << GREEN << "An Animal was created" << RESET << std::endl;
}

//Default copy constructor
Animal::Animal(const Animal &copy) {
	*this = copy;
	std::cout << GREEN << "A copy of an Animal was created" << RESET << std::endl;
}

//Default copy assignment operator
Animal	&Animal::operator=(const Animal &copy) {
	return (*this);
}

//Default destructor
Animal::~Animal() {
	std::cout << GREEN << "An Animal was destroyed" << RESET << std::endl;
}

void	Animal::makeSound() const {
	std::cout << GREEN << "Animal makes a very weird sound" << RESET << std::endl;
}

std::string	Animal::getType() const {return type;}

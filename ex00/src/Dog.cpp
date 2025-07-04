/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 21:18:14 by lude-bri          #+#    #+#             */
/*   Updated: 2025/06/21 02:45:13 by luigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

//Default Constructor
Dog::Dog() {
	type = "Dog";
	std::cout << BLUE << "A Dog was created" << RESET << std::endl;
}

//Default copy constructor
Dog::Dog(const Dog &copy) {
	*this = copy;
	std::cout << BLUE << "A copy of a Dog was created" << RESET << std::endl;
}

//Default copy assignment operator
Dog	&Dog::operator=(const Dog &copy) {
	return (*this);
}

//Default destructor
Dog::~Dog() {
	std::cout << BLUE << "A Dog was destroyed" << RESET << std::endl;
}

void	Dog::makeSound() const {
	std::cout << BLUE << "Woof!" << RESET << std::endl;
}

std::string	Dog::getType() const {return type;}

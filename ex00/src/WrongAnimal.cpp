/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 23:24:33 by lude-bri          #+#    #+#             */
/*   Updated: 2025/06/21 02:45:44 by luigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.hpp"

//Default constructor
WrongAnimal::WrongAnimal() {
	type = "Wrong Animal";
	std::cout << "Wrong Animal was created" << std::endl;
}

//Default copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
	*this = copy;
	std::cout << "A WrongAnimal copy was created\n";
}

//Default copy operator assignment
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy) {
	std::cout << "A WrongAnimal operator assignment was created\n";
	return (*this);
}

//Default destructor
WrongAnimal::~WrongAnimal() {
	std::cout << "Wrong Animal was destroyed" << std::endl;
}

void	WrongAnimal::makeSound() const {
	std::cout << "Grrrrrrrrrrr!" << std::endl;
}

std::string		WrongAnimal::getType() const {
	return (type);
}

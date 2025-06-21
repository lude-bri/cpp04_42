/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 21:18:22 by lude-bri          #+#    #+#             */
/*   Updated: 2025/06/21 02:45:51 by luigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"

//Default Constructor
WrongCat::WrongCat() {
	type = "WrongCat";
	std::cout << CYAN << "A WrongCat was created" << RESET << std::endl;
}

//Default copy constructor
WrongCat::WrongCat(const WrongCat &copy) {
	*this = copy;
	std::cout << CYAN << "A copy of a WrongCat was created" << RESET << std::endl;
}

//Default copy assignment operator
WrongCat	&WrongCat::operator=(const WrongCat &copy) {
	return (*this);
}

//Default destructor
WrongCat::~WrongCat() {
	std::cout << CYAN << "A WrongCat was destroyed" << RESET << std::endl;
}

void	WrongCat::makeSound() const {
	std::cout << CYAN << "Meow!" << RESET << std::endl;
}

std::string	WrongCat::getType() const {return type;}

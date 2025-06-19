/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 21:18:08 by lude-bri          #+#    #+#             */
/*   Updated: 2025/06/18 21:18:10 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//Default Constructor
Cat::Cat() {
	std::cout << YELLOW << "A Cat was created" << RESET << std::endl;
}

//Default copy constructor
Cat::Cat(const Cat &copy) {
	*this = copy;
	std::cout << YELLOW << "A copy of a Cat was created" << RESET << std::endl;
}

//Default copy assignment operator
Cat	&Cat::operator=(const Cat &copy) {
	return (*this);
}

//Default destructor
Cat::~Cat() {
	std::cout << YELLOW << "A Cat was destroyed" << RESET << std::endl;
}

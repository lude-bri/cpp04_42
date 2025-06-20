/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luigi <luigi@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 00:51:09 by luigi             #+#    #+#             */
/*   Updated: 2025/06/21 00:57:30 by luigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

//Default constructor
Brain::Brain() {
	std::cout << RED << "A Brain was created with a lot of love\n" << RESET;
}

//Default copy constructor
Brain::Brain(const Brain &copy) {
	*this = copy;
	std::cout << RED << "A Brain's copy was created\n" << RESET;
}

//Default copy operator assignment
Brain	&Brain::operator=(const Brain &copy) {
	std::cout << RED << "A Brains operator assignment was called\n" << RESET;
	return *this;
}

//Default destructor
Brain::~Brain() {
	std::cout << RED << "A Brain was destroyed with a lot of pain\n" << RESET;
}

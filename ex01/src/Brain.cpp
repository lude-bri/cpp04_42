/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luigi <luigi@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 00:51:09 by luigi             #+#    #+#             */
/*   Updated: 2025/06/21 02:40:41 by luigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

//Default constructor
Brain::Brain() {
	std::cout << RED << "A Brain was created with a lot of love\n" << RESET;
}

//Default copy constructor
Brain::Brain(const Brain &copy) {
	*this = copy;
	std::cout << RED << "A Brain's copy was created\n" << RESET;
}

//Default assignment operator
Brain	&Brain::operator=(Brain const &ideas) {
	std::cout << RED << "A Brains assignment operator was called\n" << RESET;
	if (this == &ideas) //protecting self assignment!
		return *this;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = ideas.ideas[i];
	return *this;
}

//Default destructor
Brain::~Brain() {
	std::cout << RED << "A Brain was destroyed with a lot of pain\n" << RESET;
}

//getter of brains
std::string	Brain::getIdeas(int i) const {return ideas[i];}

//setter of brains
void		Brain::setIdeas(int i, const std::string &idea) {
	if (i < 0 || i >= 100) {
		std::cout << "Ok Plato, no more ideas\n";
		return ;
	}
	else
		ideas[i] = idea;
}

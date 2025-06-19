/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 21:18:22 by lude-bri          #+#    #+#             */
/*   Updated: 2025/06/18 21:18:23 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

//Default Constructor
WrongCat::WrongCat() {
	std::cout << BLUE << "A WrongCat was created" << RESET << std::endl;
}

//Default copy constructor
WrongCat::WrongCat(const WrongCat &copy) {
	*this = copy;
	std::cout << BLUE << "A copy of a WrongCat was created" << RESET << std::endl;
}

//Default copy assignment operator
WrongCat	&WrongCat::operator=(const WrongCat &copy) {
	return (*this);
}

//Default destructor
WrongCat::~WrongCat() {
	std::cout << BLUE << "A WrongCat was destroyed" << RESET << std::endl;
}

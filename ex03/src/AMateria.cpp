/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 17:11:03 by lude-bri          #+#    #+#             */
/*   Updated: 2025/06/21 18:09:05 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AMateria.hpp"
#include "../inc/ICharacter.hpp"

//Default constructor
AMateria::AMateria() : _type("Default") {}

//Constructor
AMateria::AMateria(std::string const &type) : _type(type) {}

//Default copy constructor
AMateria::AMateria(const AMateria &copy) : _type(copy._type) {}

//Default copy assignment operator
AMateria &AMateria::operator=(const AMateria &copy) {
	if (this != &copy)
		_type = copy._type;
	return *this;
}

//Default destructor
AMateria::~AMateria() {
}

//getter
std::string	const &AMateria::getType() const {
	return _type;
}

//useee
void	AMateria::use(ICharacter &target) {
	(void)target;
}

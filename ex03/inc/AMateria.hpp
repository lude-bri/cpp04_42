/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 17:09:22 by lude-bri          #+#    #+#             */
/*   Updated: 2025/06/21 17:16:32 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class AMateria {

protected:


public:
	AMateria();
	AMateria(std::string const &type);
	AMateria(const AMateria &copy);
	AMateria &operator=(const AMateria &copy);
	~AMateria();

	std::string const &getType() const; //getter
	virtual AMateria *clone() const = 0; //pure virtual function
	virtual void use(ICharacter &target); //virtual function
};


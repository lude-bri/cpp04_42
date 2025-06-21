/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 21:18:17 by lude-bri          #+#    #+#             */
/*   Updated: 2025/06/21 01:40:46 by luigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//LIBRARIES
#include "Animal.hpp"
#include "Brain.hpp"

//CLASSES
class Dog : public Animal {

private:
	Brain *brain;

public:
	Dog();
	Dog(const Dog &copy);
	Dog &operator=(const Dog &copy);
	~Dog();

	void			makeSound() const;
	std::string		getType() const;
	Brain			getBrain();
};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 21:18:12 by lude-bri          #+#    #+#             */
/*   Updated: 2025/06/21 01:00:07 by luigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//LIBRARIES
#include "Animal.hpp"
#include "Brain.hpp"

//CLASSES
class Cat : public Animal {

private:
	Brain *idea;

public:
	Cat();
	Cat(const Cat &copy);
	Cat &operator=(const Cat &copy);
	~Cat();
	
	void			makeSound() const;
	std::string		getType() const;
};

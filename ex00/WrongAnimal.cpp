/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 23:24:33 by lude-bri          #+#    #+#             */
/*   Updated: 2025/06/20 23:30:49 by luigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	type = "Wrong Animal";
	std::cout << "Wrong Animal was created" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Wrong Animal was destroyed" << std::endl;
}

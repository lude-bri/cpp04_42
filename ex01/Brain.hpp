/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luigi <luigi@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 00:49:54 by luigi             #+#    #+#             */
/*   Updated: 2025/06/21 01:23:40 by luigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Animal.hpp"

class Brain {

public:
	Brain();
	Brain(const Brain &copy);
	Brain &operator=(Brain const &ideas);
	~Brain();

	std::string ideas[100];
	std::string	getIdeas(int i) const;
	void		setIdeas(int i, std::string &idea);
};


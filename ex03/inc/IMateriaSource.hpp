/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 17:42:27 by lude-bri          #+#    #+#             */
/*   Updated: 2025/06/21 17:43:58 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class IMateriaSource {

public:
	virtual ~IMateriaSource(){}
	virtual	void	learnMateria(AMateria *learn) = 0;
	virtual	AMateria *createMateria(std::string const &type) = 0;
};


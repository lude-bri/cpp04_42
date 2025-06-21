/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 17:25:01 by lude-bri          #+#    #+#             */
/*   Updated: 2025/06/21 18:22:33 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria {
public:
	Cure();
	Cure(const Cure &); 
	Cure &operator=(const Cure &);
	~Cure();

	AMateria	*clone() const;
	void		use(ICharacter &target);
};


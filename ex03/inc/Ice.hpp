/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 17:36:46 by lude-bri          #+#    #+#             */
/*   Updated: 2025/06/21 17:39:22 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {

public:
	Ice();
	Ice(const Ice &copy);
	Ice &operator=(const Ice &copy);
	~Ice();

	AMateria	*clone() const;
	void		use(ICharacter &target);
};

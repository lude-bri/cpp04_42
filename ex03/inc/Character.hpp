/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 17:50:30 by lude-bri          #+#    #+#             */
/*   Updated: 2025/06/21 17:55:32 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
private:
	std::string _name;
	AMateria *_inventory[4]; // slots!

public:
	Character();
	Character(std::string const &name);
	Character(const Character &copy);
	Character &operator=(const Character &copy);
	~Character();

	std::string const &getName() const;
	void	equip(AMateria *m);
	void	unequip(int idx);
	void	use(int idx, ICharacter &target);
	
};


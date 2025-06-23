/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 20:23:46 by lude-bri          #+#    #+#             */
/*   Updated: 2025/06/21 20:44:28 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Character.hpp"

//Default Constructor
Character::Character() : _name("Default Character") {
	DEBUG_MSG("Character default constructor was called");
}

//Constructor
Character::Character(std::string const &name) : _name(name) {
	DEBUG_MSG("Character constructor was called");
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

//Default copy constructor
Character::Character(const Character &copy) : _name(copy._name) {
	DEBUG_MSG("Character copy constructor was called");
	for (int i = 0; i < 4; i++)
	{
		if (copy._inventory[i])
			_inventory[i] = copy._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
}

//Default assignment operator copy
Character &Character::operator=(const Character &copy) {
	DEBUG_MSG("Character copy assignment operator was called");
	if (this != &copy)
	{
		_name = copy._name;
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i])
				delete _inventory[i];
			if (copy._inventory[i])
				_inventory[i] = copy._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
	}
	return *this;
}

//Default Destructor
Character::~Character() {
	DEBUG_MSG("Character destructor was called");
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
}

//Getter method
std::string const &Character::getName() const {
	DEBUG_MSG("Character GET NAME METHOD was called");
	return _name;
}

//Setter method
void	Character::equip(AMateria *m) {
	DEBUG_MSG("Character EQUIP METHOD was called");
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			break;
		}
	}
}

//Unset method
void	Character::unequip(int idx) {
	DEBUG_MSG("Character UNEQUIP METHOD was called");
	if (idx >= 0 && idx < 4)
		_inventory[idx] = NULL;
}

//use method
void	Character::use(int idx, ICharacter &target) {
	DEBUG_MSG("Character USE METHOD was called");
	if (idx >= 0 && idx < 4 && _inventory[idx])
		_inventory[idx]->use(target);
}

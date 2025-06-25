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

//COLORS
# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define YELLOW  "\033[33m"
# define BLUE    "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN    "\033[36m"
# define RESET   "\033[0m"
# define BOLD    "\033[1m"
# define BLINK    "\033[5m" 
# define REVERSE  "\033[7m"

class Character : public ICharacter {
private:
	std::string		_name;
	AMateria	*_inventory[4]; // slots!
	AMateria	*_floor[99];
	void		handleDrop(AMateria *m);
	int			_idxFloor;

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


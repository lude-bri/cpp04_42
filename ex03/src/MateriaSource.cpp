/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 20:45:33 by lude-bri          #+#    #+#             */
/*   Updated: 2025/06/21 20:58:15 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/MateriaSource.hpp"

MateriaSource::MateriaSource() : _count(0) {
	for (int i = 0; i < 4; i++)
		_materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy) : _count(copy._count) {
	for (int i = 0; i < 4; i++) 
	{
		if (copy._materias[i])
			_materias[i] = copy._materias[i]->clone();
		else
			_materias[i] = NULL;
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy) {
	if (this != &copy)
	{
		_count = copy._count;
		for (int i = 0; i < 4; i++) {
			if (_materias[i])
				delete _materias[i];
			if (copy._materias[i])
				_materias[i] = copy._materias[i]->clone();
			else
				_materias[i] = NULL;
		}
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
		if (_materias[i])
			delete _materias[i];
}

void	MateriaSource::learnMateria(AMateria *learn) {
	if (_count < 4 && learn)
	{
		_materias[_count] = learn;
		_count++;
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < _count; i++) {
		if (_materias[i] && _materias[i]->getType() == type)
			return _materias[i]->clone();
	}
	return NULL;
}


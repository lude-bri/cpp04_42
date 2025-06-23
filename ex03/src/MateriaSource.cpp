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

//Default constructor
MateriaSource::MateriaSource() : _count(0) {
	DEBUG_MSG("MateriaSource default constructor was called");
	for (int i = 0; i < 4; i++)
		_materias[i] = NULL;
}

//Default copy constructor
MateriaSource::MateriaSource(const MateriaSource &copy) : _count(copy._count) {
	DEBUG_MSG("MateriaSource copy constructor was called");
	for (int i = 0; i < 4; i++) 
	{
		if (copy._materias[i])
			_materias[i] = copy._materias[i]->clone();
		else
			_materias[i] = NULL;
	}
}

//Default copy assignment operator
MateriaSource &MateriaSource::operator=(const MateriaSource &copy) {
	DEBUG_MSG("MateriaSource copy assignment operator was called");
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

//Default destructor
MateriaSource::~MateriaSource() {
	DEBUG_MSG("MateriaSource destructor was called");
	for (int i = 0; i < 4; i++)
		if (_materias[i])
			delete _materias[i];
}

//Learn Materia Method
void	MateriaSource::learnMateria(AMateria *materia) {
	DEBUG_MSG("MateriaSource LEARN METHOD was called");
	if (_count < 4 && materia)
	{
		_materias[_count] = materia;
		_count++;
	}
}

//Create Materia Method
AMateria	*MateriaSource::createMateria(std::string const &type) {
	DEBUG_MSG("MateriaSource CREATE METHOD was called");
	for (int i = 0; i < _count; i++) {
		if (_materias[i] && _materias[i]->getType() == type)
			return _materias[i]->clone();
	}
	return NULL;
}


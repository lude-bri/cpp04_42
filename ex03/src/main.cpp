/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 20:58:37 by lude-bri          #+#    #+#             */
/*   Updated: 2025/06/21 21:04:37 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Ice.hpp"
#include "../inc/Cure.hpp"
#include "../inc/Character.hpp"
#include "../inc/MateriaSource.hpp"


void	printTestHeader(const std::string &testName) {
	std::cout << "\n";
	std::cout << YELLOW << "= " << testName << " =" << RESET << std::endl;
	std::cout << "\n";
}

int	main(void) {

	std::cout << BOLD << MAGENTA << "== TEST EX01 ==" << RESET << std::endl;

	printTestHeader("Test 00. Subject Test");
	{
		// 1. Criar MateriaSource e aprender matérias
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		// 2. Criar personagem
		ICharacter* me = new Character("Cloud");

		// 3. Criar e equipar matérias
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		// 4. Usar matérias em um alvo
		ICharacter* enemy = new Character("Sephiroth");
		me->use(0, *enemy);
		me->use(1, *enemy);

		// 5. Limpar memória
		delete enemy;
		delete me;
		delete src;
	}
	printTestHeader("Test 01. Learn and create");
	{
		IMateriaSource *bookOfSpells = new MateriaSource;
		bookOfSpells->learnMateria(new Ice());
		bookOfSpells->learnMateria(new Cure());

		AMateria *m1 = bookOfSpells->createMateria("ice");
		AMateria *m2 = bookOfSpells->createMateria("cure");
		AMateria *m3 = bookOfSpells->createMateria("fire");

		std::cout << "m1 type: " << (m1 ? m1->getType() : "null") << std::endl;
		std::cout << "m2 type: " << (m2 ? m2->getType() : "null") << std::endl;
		std::cout << "m3 type: " << (m3 ? m3->getType() : "null") << std::endl;

		delete bookOfSpells;
		delete m1;
		delete m2;
	}
	printTestHeader("Test 02. Stress Materias");
	{
		IMateriaSource *bookOfSpells = new MateriaSource;
		bookOfSpells->learnMateria(new Ice());
		bookOfSpells->learnMateria(new Cure());
		bookOfSpells->learnMateria(new Ice());
		bookOfSpells->learnMateria(new Cure());

		for (int i = 0; i < 10; i++)
			bookOfSpells->learnMateria(new Ice());

		AMateria *tmp;
		tmp = bookOfSpells->createMateria("ice");
		std::cout << "Created: " << (tmp ? tmp->getType() : "null") << std::endl;

		delete tmp;
		delete bookOfSpells;
	}
	printTestHeader("Test 03. Stress Inventory");
	{
		IMateriaSource *src = new MateriaSource;
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("Cloud");

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		tmp = src->createMateria("ice");
		me->equip(tmp);

		ICharacter* enemy = new Character("Sephiroth");
		me->use(0, *enemy);
		me->use(1, *enemy);
		me->use(2, *enemy);
		me->use(3, *enemy);
		me->use(4, *enemy);

		delete enemy;
		delete me;
		delete src;
	}
	printTestHeader("Test 04. Characters");
	{
		IMateriaSource *src = new MateriaSource;
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* hobbit1 = new Character("Frodo");

		AMateria* tmp;

		tmp = src->createMateria("ice");
		hobbit1->equip(tmp);

		tmp = src->createMateria("cure");
		hobbit1->equip(tmp);

		ICharacter* hobbit2 = new Character("Sam");

		hobbit1->use(0, *hobbit2);
		hobbit1->use(1, *hobbit2); 
		hobbit1->use(2, *hobbit2);

		delete hobbit2;
		delete hobbit1;
		delete src;
	}
	printTestHeader("Test 05. Clonesssss");
	{
		Ice *ice = new Ice();
		AMateria *copy = ice->clone();

		std::cout << "Original type :" << ice->getType() << std::endl;
		std::cout << "Cloned type : " << copy->getType() << std::endl;

		delete ice;
		delete copy;
	}
	printTestHeader("Test 06. Drop Spells");
	{
		IMateriaSource *src = new MateriaSource;
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter *elf = new Character("Legolas");

		AMateria* tmp;
		tmp = src->createMateria("ice");
		elf->equip(tmp);
		tmp = src->createMateria("cure");
		elf->equip(tmp);
		tmp = src->createMateria("ice");
		elf->equip(tmp);
		tmp = src->createMateria("cure");
		elf->equip(tmp);
		elf->use(0, *elf);
		
		elf->unequip(0);
		tmp = src->createMateria("cure");
		elf->equip(tmp);
		elf->use(0, *elf);
		elf->unequip(0);
		elf->use(0, *elf);

		delete elf;
		delete src;
	}
	printTestHeader("Test 07. Drop everything");
	{
		IMateriaSource *src = new MateriaSource;
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter *elf = new Character("Legolas");

		//equip everything
		AMateria* tmp;
		tmp = src->createMateria("ice");
		elf->equip(tmp);
		tmp = src->createMateria("cure");
		elf->equip(tmp);
		tmp = src->createMateria("ice");
		elf->equip(tmp);
		tmp = src->createMateria("cure");
		elf->equip(tmp);
	
		//unequip everything
		for (int i = 0; i < 4; i++)
			elf->unequip(i);

		//equip everything AGAIN
		tmp = src->createMateria("ice");
		elf->equip(tmp);
		tmp = src->createMateria("cure");
		elf->equip(tmp);
		tmp = src->createMateria("ice");
		elf->equip(tmp);
		tmp = src->createMateria("cure");
		elf->equip(tmp);

		//unequip everything AGAIN
		for (int i = 0; i < 4; i++)
			elf->unequip(i);

		delete elf;
		delete src;
	}
}

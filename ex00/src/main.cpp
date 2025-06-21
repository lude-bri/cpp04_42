/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 21:18:19 by lude-bri          #+#    #+#             */
/*   Updated: 2025/06/21 02:45:38 by luigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

void	printTestHeader(const std::string &testName) {
	std::cout << "\n";
	std::cout << YELLOW << "= " << testName << " =" << RESET << std::endl;
	std::cout << "\n";
}

int	main(void) {

	std::cout << BOLD << MAGENTA << "== TEST EX00 ==" << RESET << std::endl;

	printTestHeader("Test 00. Builing");
	{
		Animal	*generic = new Animal();
		std::cout << generic->getType() << " " << std::endl;
		generic->makeSound();

		Animal	*dog = new Dog();
		std::cout << dog->getType() << " " << std::endl;
		dog->makeSound();

		Animal *cat = new Cat();
		std::cout << cat->getType() << " " << std::endl;
		cat->makeSound();

		delete cat;
		delete dog;
		delete generic;
	}

	printTestHeader("Test 01. Array of Animals");
	{
		Animal	*zoo[4];

		zoo[0] = new Dog;
		zoo[1] = new Cat;
		zoo[2] = new Cat;
		zoo[3] = new Dog;

		for (int i = 0; i < 4; i++) {
			zoo[i]->makeSound();
			delete zoo[i];
		}
	}

	printTestHeader("Test 02. Generic animal vs Specific Animal");
	{
		Animal	animal;
		Dog		dog;

		dog.makeSound();
	}

	printTestHeader("Test 03. WrongAnimal and WrongCat");
	{
		WrongAnimal *bizarre = new WrongCat;

		bizarre->makeSound();

		delete bizarre;
	}

	printTestHeader("Test 04. Subject's Wrong Animal");
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const WrongAnimal* i = new WrongCat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();
		delete i;
		delete j;
		delete meta;
	}

	printTestHeader("Test 05. Subject's Main");
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();
		delete i;
		delete j;
		delete meta;
	}
}

// SUBJECTs MAIN
// int	main(void) {
//
// 	const Animal* meta = new Animal();
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
//
// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << i->getType() << " " << std::endl;
// 	i->makeSound();
// 	j->makeSound();
// 	meta->makeSound();
// 	delete i;
// 	delete j;
// 	delete meta;
// 	return (0);
// }=

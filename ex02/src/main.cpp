/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 21:18:19 by lude-bri          #+#    #+#             */
/*   Updated: 2025/06/21 03:50:26 by luigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"

void	printTestHeader(const std::string &testName) {
	std::cout << "\n";
	std::cout << YELLOW << "= " << testName << " =" << RESET << std::endl;
	std::cout << "\n";
}

int	main(void) {

	std::cout << BOLD << MAGENTA << "== TEST EX02 ==" << RESET << std::endl;

	printTestHeader("Test 00. Subject Test");
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		delete j;
		delete i;
	}
	printTestHeader("Test 01. Subject Crazy Test");
	{
		Animal	*animals[10];

		for (int i = 0; i < 10; i++)
			i % 2 ? animals[i] = new Cat() : animals[i] = new Dog();

		for (int i = 0; i < 10; i++)
			delete animals[i];
	}
	printTestHeader("Test 02. Deep copy of Dogs");
	{
		Dog	dog1;

		dog1.getBrain().setIdeas(0, "I love Bones!");

		Dog dog2 = dog1;
		dog2.getBrain().setIdeas(0, "I prefer Steaks!");

		std::cout << "Dog1 idea 0: " << dog1.getBrain().getIdeas(0) << std::endl;
		std::cout << "Dog2 idea 0: " << dog2.getBrain().getIdeas(0) << std::endl;
	}
	printTestHeader("Test 03. Deep copy of Cats");
	{
		Cat	cat1;

		cat1.getBrain().setIdeas(0, "I hate dogs and humans!");

		Cat cat2;
		cat2 = cat1;
		cat2.getBrain().setIdeas(0, "I hate everybody");

		std::cout << "Cat1 idea 0: " << cat1.getBrain().getIdeas(0) << std::endl;
		std::cout << "Cat2 idea 0: " << cat2.getBrain().getIdeas(0) << std::endl;
	}
}



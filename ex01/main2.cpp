#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define GREEN "\033[32m"
#define RED "\033[31m"
#define BLUE "\033[34m"
#define RESET "\033[0m"

void print_header(const std::string& msg) {
    std::cout << "\n" << BLUE << "===== " << msg << " =====" << RESET << "\n";
}

int main() {
    // ===== 1. Teste básico de criação/destruição =====
    print_header("Criação e destruição de Dog e Cat");
    {
        Dog* dog = new Dog();
        Cat* cat = new Cat();

        delete dog; // Deve chamar ~Dog() e depois ~Animal()
        delete cat; // Deve chamar ~Cat() e depois ~Animal()
    }

    // ===== 2. Teste de deep copy (cópia profunda) =====
    print_header("Teste de deep copy (Dog)");
    {
        Dog dog1;
        dog1.getBrain()->setIdea(0, "I love bones!");

        Dog dog2 = dog1; // Chama o copy constructor
        dog2.getBrain()->setIdea(0, "I prefer steaks!");

        std::cout << "Dog1 idea 0: " << dog1.getBrain()->getIdea(0) << "\n";
        std::cout << "Dog2 idea 0: " << dog2.getBrain()->getIdea(0) << "\n";
        // As ideias devem ser diferentes (cópia profunda)!
    }

    // ===== 3. Teste de atribuição com cópia profunda =====
    print_header("Teste de operador de atribuição (Cat)");
    {
        Cat cat1;
        cat1.getBrain()->setIdea(0, "I hate dogs!");

        Cat cat2;
        cat2 = cat1; // Chama o operador de atribuição
        cat2.getBrain()->setIdea(0, "I love naps!");

        std::cout << "Cat1 idea 0: " << cat1.getBrain()->getIdea(0) << "\n";
        std::cout << "Cat2 idea 0: " << cat2.getBrain()->getIdea(0) << "\n";
        // As ideias devem ser independentes!
    }

    // ===== 4. Teste de polimorfismo e Brain =====
    print_header("Polimorfismo com Brain");
    {
        Animal* animals[2];
        animals[0] = new Dog();
        animals[1] = new Cat();

        animals[0]->getBrain()->setIdea(0, "I'm a good boy!");
        animals[1]->getBrain()->setIdea(0, "I'm a lazy cat!");

        for (int i = 0; i < 2; i++) {
            std::cout << animals[i]->getType() << " idea 0: "
                      << animals[i]->getBrain()->getIdea(0) << "\n";
            delete animals[i];
        }
    }

    // ===== 5. Teste de array de animais =====
    print_header("Array de animais com ideias diferentes");
    {
        Animal* zoo[4];
        for (int i = 0; i < 4; i++) {
            if (i % 2 == 0)
                zoo[i] = new Dog();
            else
                zoo[i] = new Cat();
            zoo[i]->getBrain()->setIdea(0, "Idea " + std::to_string(i));
        }

        for (int i = 0; i < 4; i++) {
            std::cout << zoo[i]->getType() << " idea 0: "
                      << zoo[i]->getBrain()->getIdea(0) << "\n";
            delete zoo[i];
        }
    }

    return 0;
}

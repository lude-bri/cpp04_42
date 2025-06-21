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


//melhorar main
int main() {
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

    return 0;
}

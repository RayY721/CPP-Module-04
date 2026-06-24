/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyu <kuyu@student.codam.nl>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 16:21:49 by kuyu              #+#    #+#             */
/*   Updated: 2026/06/24 16:21:50 by kuyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int	main()
{
    std::cout << "--- Construction ---" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
    const WrongAnimal* k = new WrongCat();
    std::cout << "--------------------" << std::endl;

    std::cout << "--- Type and Sound ---" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
    std::cout << "----------------" << std::endl;

    std::cout << "--- WrongCat ---" << std::endl;
    std::cout << k->getType() << " " << std::endl;
    k->makeSound();
    std::cout << "----------------" << std::endl;

    std::cout << "--- Destruction ---" << std::endl;
	delete meta;
	delete j;
	delete i;
    delete k;
    std::cout << "----------------" << std::endl;
	return 0;
}

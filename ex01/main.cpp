
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

void    test_polymorphism()
{
    const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;

	dog->makeSound();
	cat->makeSound();
	meta->makeSound();

	delete meta;
	delete dog;
	delete cat;
}

void    test_destructor()
{
	const Animal* dog = new Dog();

	delete dog;
}

void    test_copy_constructor()
{
	Dog dog1;

	dog1.getBrain()->ideas[0] = "Bone";

	Dog dog2(dog1);

	std::cout << dog1.getBrain()->ideas[0] << std::endl;
	std::cout << dog2.getBrain()->ideas[0] << std::endl;

	dog2.getBrain()->ideas[0] = "Chicken";

	std::cout << std::endl;

	std::cout << dog1.getBrain()->ideas[0] << std::endl;
	std::cout << dog2.getBrain()->ideas[0] << std::endl;
}

void    test_assignment_operator()
{
	Dog dog1;
	Dog dog2;

	dog1.getBrain()->ideas[0] = "Bone";

	dog2 = dog1;

	dog2.getBrain()->ideas[0] = "Chicken";

	std::cout << dog1.getBrain()->ideas[0] << std::endl;
	std::cout << dog2.getBrain()->ideas[0] << std::endl;
}

void    test_subject_array()
{
	const Animal* animals[10];

	for (int i = 0; i < 5; i++)
		animals[i] = new Dog();

	for (int i = 5; i < 10; i++)
		animals[i] = new Cat();

	for (int i = 0; i < 10; i++)
		delete animals[i];
}

int main()
{
	// test_polymorphism();
	// test_destructor();
	// test_copy_constructor();
	// test_assignment_operator();
	test_subject_array();
}

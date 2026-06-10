
#include "Dog.hpp"
#include <iostream>

Dog::Dog() : AAnimal()
{
    type = "Dog";
	brain = new Brain();
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : AAnimal(other)
{
	brain = new Brain(*other.brain);
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog assignment operator called" << std::endl;
    if (this != &other)
	{
        type = other.type;		// equivalent to Animal::operator=(other);
		// even Animal::operator=(other) is a better choice
		delete brain;
		brain = new Brain(*other.brain);
	}
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
	delete brain;
}

void    Dog::makeSound() const
{
    std::cout << "Woof!" << std::endl;
}

Brain* Dog::getBrain() const
{
    return brain;
}

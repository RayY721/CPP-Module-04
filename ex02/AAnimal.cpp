#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal() : type("AAnimal")
{
    std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other) : type(other.type)
{
    std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
    if (this != &other)
        this->type = other.type;
    return *this;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor called" << std::endl;
}

std::string	AAnimal::getType() const
{
    return this->type;
}

void	AAnimal::makeSound() const
{
    std::cout << "AAnimal makes a sound" << std::endl;
}

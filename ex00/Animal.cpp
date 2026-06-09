#include "Animal.hpp"

Animal::Animal() : type("Animal")
{

}

Animal::Animal(const Animal& other) : type(other.type)
{

}

Animal& Animal::operator=(const Animal& other)
{

}

Animal::~Animal()
{

}

std::string	Animal::getType() const
{

}

void	Animal::makeSound() const
{

}
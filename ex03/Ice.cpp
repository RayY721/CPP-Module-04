

#include "Ice.hpp"
#include <iostream>
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(Ice const& other) : AMateria(other)
{
}

Ice& Ice::operator=(Ice const& other)
{
	//TODO: 
	// better to use base version
	// if (this != &other)
	//	AMateria::operator=(other);
	// return *this;
	(void)other;
	return *this;
}

Ice::~Ice()
{
}

AMateria* Ice::clone() const
{
	// TODO: correct the code below
	AMateria* ice = new Ice(*this);
	return ice;
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

#include "Cure.hpp"
#include <iostream>
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(Cure const& other) : AMateria(other)
{
}

Cure& Cure::operator=(Cure const& other)
{
	// better to use base version
	// if (this != &other)
	//	AMateria::operator=(other);
	// return *this;
	(void)other;
	return *this;
}

Cure::~Cure()
{
}

AMateria* Cure::clone() const
{
	// TODO: should be "new Cure(*this)"
	AMateria* cure = new Cure();
	return cure;
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName()<< "'s wounds *" << std::endl;
}
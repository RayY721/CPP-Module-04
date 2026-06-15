
#include "Cure.hpp"
#include <iostream>
#include "ICharacter.hpp"
#include "Character.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(Cure const& other) : AMateria(other)
{
}

Cure& Cure::operator=(Cure const& other)
{
	(void)other;
	return *this;
}

Cure::~Cure()
{
}

AMateria* Cure::clone() const
{
	AMateria* cure = new Cure();

	return cure;
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.name << "'s wounds *"
}
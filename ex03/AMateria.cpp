
#include "AMateria.hpp"

// this will set the std::string type to "" by default
// It is equivalent to AMateria::AMateria() : type("")
AMateria::AMateria()
{
}

AMateria::AMateria(std::string const& type) : type(type)
{

}

AMateria::AMateria(AMateria const & other) : type(other.type)
{

}

// the subject says "while assigning a Materia to antoher, 
// copying the type doesn't make sense "
AMateria& AMateria::operator=(AMateria const & other)
{
	(void)other;
	return *this;
}

AMateria::~AMateria()
{
}

std::string const& AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}
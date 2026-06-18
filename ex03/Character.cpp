
#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() : name("")
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(std::string const& name) : name(name)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(Character const& other) : name(other.name)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;

	for (int i = 0; i < 4; i++)
	{
		if (other.inventory[i] != NULL)
			inventory[i] = other.inventory[i]->clone();
	}
}

Character& Character::operator=(Character const& other)
{
	if (this == &other)
		return *this;

	for (int i = 0; i < 4; i++)
    {
        delete inventory[i];
        inventory[i] = NULL;
    }
	for (int i = 0; i < 4; i++)
	{
		if (other.inventory[i] != NULL)
			inventory[i] = other.inventory[i]->clone();
	}
    name = other.name;
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete inventory[i];
}

std::string const&	Character::getName() const
{
	return name;
}

void	Character::equip(AMateria* m)
{
    int i;

    for (i = 0; i < 4; i++)
    
    if (i = 4)
        return ;
    inventory[i] = m;
}

void	Character::unequip(int idx)
{

}

void	Character::use(int idx, ICharacter& target)
{
    
}

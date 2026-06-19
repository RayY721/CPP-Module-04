
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

// TODO: deal with the hollow situation
void	Character::equip(AMateria* m)
{
    int i;

	if (m == NULL)
		return ;

    for (i = 0; i < 4; i++)
	{
        if (inventory[i] == m)
            return ;
		else if (inventory[i] == NULL)
		{
			inventory[i] = m;
			return ;
		}
	}
	return ;
}

// TODO: Add floor member class so that the unequiped AMateria will not be leaked
void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && inventory[idx] != NULL)
		inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && inventory[idx] != NULL)
		inventory[idx]->use(target);
}

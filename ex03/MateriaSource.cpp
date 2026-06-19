
#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
        materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const& other)
{
    for (int i = 0; i < 4; i++)
        materia[i] = NULL;
    
    for (int i = 0; i < 4; i++)
    {
        if (other.materia[i] != NULL)
            materia[i] = other.materia[i]->clone();
    }
	
}

// Need to delete the materia first, otherwise, it will be leaked
MateriaSource& MateriaSource::operator=(MateriaSource const& other)
{
    if (this == &other)
        return *this;
    for (int i = 0; i < 4; i++)
    {
        delete materia[i];
        materia[i] = NULL;
    }
    for (int i = 0; i < 4; i++)
    {
        if (other.materia[i] != NULL)
            materia[i] = other.materia[i]->clone();
    }    
    return *this;
}

// No need to check NULL, as to delete NULL is safe
MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        delete materia[i];
}

// If the materia[] is full, it will detele the new AMateria object
void	MateriaSource::learnMateria(AMateria* m)
{
    // check for null input
    if (m == NULL)
        return ;
    // check for empty spot
    for (int i = 0; i < 4; i++)
    {
        if (materia[i] == NULL)
        {
            materia[i] = m;
            return ;
        }
    }
    // take over the ownership
    delete m;
    return ;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (materia[i] != NULL && materia[i]->getType() == type)
            return materia[i]->clone();
    }
    return 0;
}

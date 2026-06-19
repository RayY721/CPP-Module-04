

#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>

int main()
{
	std::cout << "-------- Tests from subject --------" << std::endl;
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
    delete me;

	std::cout << "-------- Extra Tests --------" << std::endl;

	std::cout << "-------- Deep Copy --------" << std::endl;

	Character original("original");
	original.equip(new Ice());

	Character copy(original);
	original.use(0, copy);
	copy.use(0, original);

	std::cout << "-------- unequip Tests --------" << std::endl;
	ICharacter* me2 = new Character("me2");
	ICharacter* target = new Character("target");
	AMateria* tmp2 = new Cure();
	me2->equip(tmp2);
	me2->unequip(0);
	delete	tmp2;

	std::cout << "-------- Wrong Operations --------" << std::endl;
	me2->use(-1, *target);
	me2->use(4, *target);
	me2->equip(NULL);
	me2->unequip(-1);
	me2->unequip(4);

	delete	src;
	delete	me2;
	delete	target;
	// delete	tmp;		// don't free it as the as address in tmp has been freed by destreuctor of me

    return 0;
}

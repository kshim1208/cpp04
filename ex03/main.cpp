#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "LList.hpp"
#include "LListAMateria.hpp"

#include <iostream>

void	llist_del_amateria(void	*materia)
{
	AMateria*	object = static_cast<AMateria*>(materia);
	
	std::cout << "materia - " << object->getType() << " has been deleted" << std::endl;
	delete object;
}

void	llist_print_amateria_content(void *materia)
{
	AMateria*	object = static_cast<AMateria*>(materia);
	
	std::cout << object->getType() << std::endl; 
}

int main()
{
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
	delete src;

	std::cout << "-----------subject test done-------------" << std::endl;

	IMateriaSource* m_src = new MateriaSource();
	m_src->learnMateria(new Ice());
	m_src->learnMateria(new Cure());
	m_src->learnMateria(new Ice());
	m_src->learnMateria(new Cure());
	m_src->learnMateria(new Cure());
	LListAMateria* floor = new LListAMateria(llist_del_amateria, llist_print_amateria_content);

	ICharacter* ks = new Character("KS");
	ks->setFloor(floor);
	ICharacter* him = new Character("HIM");
	him->setFloor(floor);

	AMateria* buf;
	buf = m_src->createMateria("ice");
	ks->equip(buf);
	buf = m_src->createMateria("ice");
	ks->equip(buf);
	buf = m_src->createMateria("ice");
	ks->equip(buf);
	buf = m_src->createMateria("ice");
	ks->equip(buf);
	ks->equip(buf);
	buf = m_src->createMateria("ice");
	ks->equip(buf);
	buf = m_src->createMateria("cure");
	him->equip(buf);
	buf = m_src->createMateria("cure");
	him->equip(buf);

	// these are examples about c++11 dynamic_cast - for explain

	// ICharacter*	dopple = new Character("Dopple");
	// *(dynamic_cast<Character*>(dopple)) = *(dynamic_cast<Character*>(ks));

	// ICharacter*	dopple = new Character(*(dynamic_cast<Character *>(ks)));

	ICharacter*	dopple = ks->copy();

	ks->use(0, *him);
	him->use(0, *ks);

	dopple->use(0, *ks);
	dopple->use(1, *ks);

	ks->unequip(1);
	him->unequip(1);
	dopple->unequip(2);

	floor->printNodeContentAMateria();

	delete floor;
	delete him;
	delete ks;
	delete m_src;

	return 0; 
}
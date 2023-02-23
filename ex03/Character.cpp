
#include "Character.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

#include <iostream>

Character::Character()
{
	this->name_ = "Character";
}

Character::~Character()
{

}

Character::Character(const Character& source)
{
	this->name_ = source.name_;
}

Character& Character::operator=(const Character& source)
{
	this->name_ = source.name_;
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->name_);
}

void Character::equip(AMateria* m)
{

}

void Character::unequip(int idx)
{

}

void Character::use(int idx, Character& target)
{

}


#include "Character.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

#include <iostream>

std::string const & Character::getName() const
{
	return (this->name_);
}

void Character::equip(AMateria* m)
{
	if (m == NULL)
	{
		return ;
	}
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		if (this->inventory_[i] == m)
		{
			std::cout << this->getName() << " ALLREADY HAS IT !!!" << std::endl;
			return ;
		}
	}
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		if (this->inventory_[i] == NULL)
		{
			this->inventory_[i] = m;
			std::cout << this->getName() << " puts "<< m->getType() << " to inventory index : " << i << std::endl;
			return ;
		}
	}
	std::cout << "NOT ENOUGH INVENTORY FOR THIS MATERIA!!" << std::endl;
	std::cout << this->getName() << " puts " << m->getType() << " on the floor " << std::endl;
	this->floor_->listAddFront(m);
}

void Character::unequip(int idx)
{
	AMateria	*unequipped = this->inventory_[idx];

	if (unequipped == NULL)
	{
		std::cout << "THIS INVENTORY SLOT IS EMPTY !!!" << std::endl;
		return ;
	}
	this->floor_->listAddFront(unequipped);
	std::cout << "saving unequipped materia" << std::endl;
	this->inventory_[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (this->inventory_[idx] == NULL)
	{
		std::cout << "NO MATERIA IN THIS INVENTORY SLOT!!!" << std::endl; 
		return ;
	}
	this->inventory_[idx]->use(target);

	delete this->inventory_[idx];
	this->inventory_[idx] = NULL;
}

void Character::setFloor(LListAMateria* floor)
{
	if (this->floor_ == floor)
		return ;
	if (this->floor_ != NULL)
	{
		this->floor_->listClear();
	}
	this->floor_ = floor;
}

Character* Character::clone()
{
	Character* tmp = new Character(*this);
	return (tmp);
}


Character::Character()
{
	this->name_ = "Character";
	this->floor_ = NULL;
	
	this->setNullInventory();
}

Character::~Character()
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		if (this->inventory_[i] != NULL)
			delete this->inventory_[i];
	}
}

Character::Character(const std::string& name)
{
	this->name_ = name;
	this->floor_ = NULL;

	this->setNullInventory();
}

Character::Character(const Character& source)
{
	this->name_ = source.name_;

	this->deepCopyInventory(source);
	this->floor_ = source.floor_;
}

Character& Character::operator=(const Character& source)
{
	this->name_ = source.name_;

	std::cout << " copy-assign " << std::endl;
	
	this->deepCopyInventory(source);
	this->floor_ = source.floor_;
	return (*this);
}

void Character::setNullInventory()
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		this->inventory_[i] = NULL;
	}
}

void Character::deepCopyInventory(const Character& source)
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		if (this->inventory_[i] != NULL)
			delete this->inventory_[i];
		if (source.inventory_[i] != NULL)
			this->inventory_[i] = source.inventory_[i]->clone();
	}
}

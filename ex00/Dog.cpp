#include "Dog.hpp"

#include <iostream>

Dog::Dog() : Animal()
{
	this->type = "Dog";
	std::cout << "Dog - " << this->type << " has been created !!!" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog - " << this->type << " has been destroyed....." << std::endl;
}

Dog::Dog(const Dog& source) : Animal()
{
	std::cout << "Dog - " << this->type << " has been copy-created !!!" << std::endl;
	this->type = source.type;
}

Dog& Dog::operator=(const Dog& source)
{
	std::cout << "Dog - " << this->type << " has been copy-operator-created !!!" << std::endl;
	this->type = source.type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog - " << this->type << " : BARK! BARK! BARK!" << std::endl;
}

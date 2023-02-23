
#include "Animal.hpp"

#include <iostream>

Animal::Animal()
{
	this->type = "EMPTY";
	std::cout << "Animal - " << this->type << " has been created !!!" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal - " << this->type << " has been destroyed....." << std::endl;
}

Animal::Animal(const Animal& source)
{
	std::cout << "Animal - " << this->type << " has been copy-created !!!" << std::endl;
	this->type = source.type;
}

Animal& Animal::operator=(const Animal& source)
{
	std::cout << "Animal - " << this->type << " has been copy-operator-created !!!" << std::endl;
	this->type = source.type;
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal - " << this->type << " makes UNRECOGNIZABLE SOUND!!!!" << std::endl;
}

const std::string&	Animal::getType(void) const
{
	return (this->type);
}

#include "WrongAnimal.hpp"

#include <iostream>

WrongAnimal::WrongAnimal()
{
	this->type = "EMPTY";
	std::cout << "WrongAnimal - " << this->type << " has been created !!!" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal - " << this->type << " has been destroyed....." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& source)
{
	std::cout << "WrongAnimal - " << this->type << " has been copy-created !!!" << std::endl;
	this->type = source.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& source)
{
	std::cout << "WrongAnimal - " << this->type << " has been copy-operator-created !!!" << std::endl;
	this->type = source.type;
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal - " << this->type << " makes UNRECOGNIZABLE SOUND!!!!" << std::endl;
}

const std::string&	WrongAnimal::getType(void) const
{
	return (this->type);
}
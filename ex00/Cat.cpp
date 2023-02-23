#include "Cat.hpp"

#include <iostream>

Cat::Cat() : Animal()
{
	this->type = "Cat";
	std::cout << "Cat - " << this->type << " has been created !!!" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat - " << this->type << " has been destroyed....." << std::endl;
}

Cat::Cat(const Cat& source) : Animal()
{
	std::cout << "Cat - " << this->type << " has been copy-created !!!" << std::endl;
	this->type = source.type;
}

Cat& Cat::operator=(const Cat& source)
{
	std::cout << "Cat - " << this->type << " has been copy-operator-created !!!" << std::endl;
	this->type = source.type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat - " << this->type << " : ............... " << std::endl;
}

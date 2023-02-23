#include "WrongCat.hpp"

#include <iostream>

WrongCat::WrongCat() : WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "WrongCat - " << this->type << " has been created !!!" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat - " << this->type << " has been destroyed....." << std::endl;
}

WrongCat::WrongCat(const WrongCat& source) : WrongAnimal()
{
	std::cout << "WrongCat - " << this->type << " has been copy-created !!!" << std::endl;
	this->type = source.type;
}

WrongCat& WrongCat::operator=(const WrongCat& source)
{
	std::cout << "WrongCat - " << this->type << " has been copy-operator-created !!!" << std::endl;
	this->type = source.type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat - " << this->type << " : ............... " << std::endl;
}

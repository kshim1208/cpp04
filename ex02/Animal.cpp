
#include "Animal.hpp"

#include <iostream>

Animal::Animal()
{
	this->type_ = "EMPTY";
	std::cout << "Animal - " << this->type_ << " has been created !!!" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal - " << this->type_ << " has been destroyed....." << std::endl;
}

Animal::Animal(const Animal& source)
{
	std::cout << "Animal - " << this->type_ << " has been copy-created !!!" << std::endl;
	this->type_ = source.type_;
}

Animal& Animal::operator=(const Animal& source)
{
	std::cout << "Animal - " << this->type_ << " has been copy-operator-created !!!" << std::endl;
	this->type_ = source.type_;
	return (*this);
}

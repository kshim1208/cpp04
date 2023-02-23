
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

void	Animal::makeSound(void) const
{
	std::cout << "Animal - " << this->type_ << " makes UNRECOGNIZABLE SOUND!!!!" << std::endl;
}

const std::string&	Animal::getType(void) const
{
	return (this->type_);
}

void	Animal::showIdea(unsigned int index) const
{
	std::cout << "Animal is thinking about nothing.... (index - " << index << ")" << std::endl;
}

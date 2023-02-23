#include "Dog.hpp"
#include "Brain.hpp"

#include <iostream>

Dog::Dog() : Animal()
{
	this->brain_ = new Brain();
	this->type_ = "Dog";
	std::cout << "Dog - " << this->type_ << " has been created !!!" << std::endl;
}

Dog::~Dog()
{
	delete this->brain_;
	std::cout << "Dog - " << this->type_ << " has been destroyed....." << std::endl;
}

Dog::Dog(const Dog& source) : Animal()
{
	this->type_ = source.type_;
	this->brain_ = new Brain(*source.brain_);
	std::cout << "Dog - " << this->type_ << " has been copy-created !!!" << std::endl;
}

Dog& Dog::operator=(const Dog& source)
{
	this->type_ = source.type_;
	if (this->brain_ != NULL)
	{
		delete this->brain_;
		this->brain_ = NULL;
	}
	this->brain_ = new Brain(*source.brain_);
	std::cout << "Dog - " << this->type_ << " has been copy-operator-created !!!" << std::endl;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog - " << this->type_ << " : BARK! BARK! BARK!" << std::endl;
}

const std::string&	Dog::getType(void) const
{
	return (this->type_);
}

void	Dog::showIdea(unsigned int index) const
{
	std::cout << "Dog - " << this->type_ << " is thinking about " << this->brain_->thinkIdea(index) << "..... (index : " << index << ")" << std::endl;
}
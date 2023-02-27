#include "Cat.hpp"
#include "Brain.hpp"

#include <iostream>

Cat::Cat() : Animal()
{
	this->brain_ = new Brain();
	this->type_ = "Cat";
	std::cout << "Cat - " << this->type_ << " has been created !!!" << std::endl;
}

Cat::~Cat()
{
	delete this->brain_;
	std::cout << "Cat - " << this->type_ << " has been destroyed....." << std::endl;
}

Cat::Cat(const Cat& source) : Animal()
{
	std::cout << "Cat - " << this->type_ << " has been copy-created !!!" << std::endl;
	this->type_ = source.type_;
	this->brain_ = new Brain(*source.brain_);
}

Cat& Cat::operator=(const Cat& source)
{
	std::cout << "Cat - " << this->type_ << " has been copy-operator-created !!!" << std::endl;
	this->type_ = source.type_;
	if (this->brain_ != NULL)
	{
		delete this->brain_;
		this->brain_ = NULL;
	}
	this->brain_ = new Brain(*source.brain_);
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat - " << this->type_ << " : ............... " << std::endl;
}

void	Cat::showIdea(unsigned int index) const
{
	std::cout << "Cat - " << this->type_ << " is thinking about " << this->brain_->thinkIdea(index) << "..... (index : " << index << ")" << std::endl;
}

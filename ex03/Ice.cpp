
#include "Ice.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

#include <iostream>

Ice::Ice()
{
	this->type_ = "Ice";
}

Ice::~Ice()
{

}

Ice::Ice(const Ice& source)
{
	this->type_ = source.type_;
}

Ice& Ice::operator=(const Ice& source)
{
	this->type_ = source.type_;
	return (*this);
}

void Ice::use(ICharacter& target)
{

	std::cout << "* shoots a ice bolt at" << target.getName() << " *" << std::endl;
}

AMateria*	Ice::clone() const
{
	AMateria*	tmp = new Ice();

	return (tmp);
}
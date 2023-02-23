
#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

#include <iostream>

Cure::Cure()
{
	this->type_ = "cure";
}

Cure::~Cure()
{

}

Cure::Cure(const Cure& source)
{
	this->type_ = source.type_;
}

Cure& Cure::operator=(const Cure& source)
{
	this->type_ = source.type_;
	return (*this);
}

void Cure::use(ICharacter& target)
{

	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria*	Cure::clone() const
{
	AMateria*	tmp = new Cure();

	return (tmp);
}
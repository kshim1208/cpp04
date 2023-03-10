
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

#include <iostream>
#include <string>

std::string const & AMateria::getType() const
{
	return (this->type_);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* BASIC MATERIA DOES NOTHING TO " << target.getName() << "!!! *" << std::endl;
}



AMateria::AMateria()
{
	this->type_ = "BASIC";
}

AMateria::~AMateria()
{

}

AMateria::AMateria(std::string const & type)
{
	this->type_ = type;
}

AMateria::AMateria(const AMateria& source)
{
	this->type_ = source.type_;
}

AMateria& AMateria::operator=(const AMateria& source)
{
	this->type_ = source.type_;
	return (*this);
}

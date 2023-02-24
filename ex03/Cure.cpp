
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
	AMateria*	tmp = new Cure(); // 업 캐스팅으로 반환? 
									// 혹시 순수 가상 함수 구현할 때 타입을 바꿀  수  있나?

	return (tmp);
}

// Cure*	Cure::clone() const
// {
// 	Cure*	tmp = new Cure(); // 업 캐스팅으로 반환? 
// 									// 혹시 순수 가상 함수 구현할 때 타입을 바꿀  수  있나?

// 	return (tmp);
// }
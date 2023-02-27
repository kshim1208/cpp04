
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include <iostream>

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	
	delete i;
	delete j;
	delete meta;
	
	const WrongAnimal* Wmeta = new WrongAnimal();
	j = new Dog();
	const WrongAnimal* Wcat = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << Wcat->getType() << " " << std::endl;
	Wcat->makeSound();
	j->makeSound();
	Wmeta->makeSound();

	delete Wcat;
	delete j;
	delete Wmeta;
	
	return 0;
}

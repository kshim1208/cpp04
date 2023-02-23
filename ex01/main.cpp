
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include <iostream>

void	test_leaks()
{
	system("leaks I_dont_want_to_set_the_world_on_fire | grep leaks");
}

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	delete i;
	delete j;

	Animal* horde[10];
	
	std::cout << "just make and show" << std::endl;
	for (int i = 0; i < 5; i++)
		horde[i] = new Dog;
	for (int i = 5; i < 10; i++)
		horde[i] = new Cat;
	
	for (int i = 0; i < 10; i++)
		horde[i]->showIdea(0);

	for (int i = 0; i < 10; i++)
		delete horde[i];

	std::cout << "----show deep copy----" << std::endl;
	Cat* alpha_cat = new Cat();
	Cat* another_alpha_Cat;
	Dog* alpha_dog = new Dog();

	std::cout << "----try deep copy----" << std::endl;
	another_alpha_Cat = new Cat(*alpha_cat);
	alpha_cat->showIdea(0);
	another_alpha_Cat->showIdea(0);
	
	delete alpha_cat;
	delete alpha_dog;
	delete another_alpha_Cat;

	test_leaks();

	return 0;
}

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain*	brain_;
	public:
		Dog();
		~Dog();
		Dog(const Dog& source);
		Dog& operator=(const Dog& source);
		void	makeSound(void) const;
		void	showIdea(unsigned int index) const;
};


#endif
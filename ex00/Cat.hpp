#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		~Cat();
		Cat(const Cat& source);
		Cat& operator=(const Cat& source);
		void	makeSound(void) const; 
};


#endif
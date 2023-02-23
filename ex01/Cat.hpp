#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain*	brain_;
	public:
		Cat();
		~Cat();
		Cat(const Cat& source);
		Cat& operator=(const Cat& source);
		void	makeSound(void) const;
		void	showIdea(unsigned int index) const;
};


#endif
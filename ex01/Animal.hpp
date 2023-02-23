#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal
{
	protected:
		std::string	type_;
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal& source);
		Animal& operator=(const Animal& source);
		virtual void	makeSound(void) const;
		const std::string&	getType(void) const;
		virtual void	showIdea(unsigned int index) const;
};


#endif
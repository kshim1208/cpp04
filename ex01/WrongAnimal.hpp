#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>

class WrongAnimal
{
	protected:
		std::string	type;
	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal& source);
		WrongAnimal& operator=(const WrongAnimal& source);
		void	makeSound(void) const;
		const std::string&	getType(void) const;
};


#endif
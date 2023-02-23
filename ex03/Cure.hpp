#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	private:
	
	public:
		Cure();
		~Cure();
		Cure(const Cure& source);
		Cure& operator=(const Cure& source);

		void use(ICharacter& target);
		AMateria*	clone() const;
};

#endif
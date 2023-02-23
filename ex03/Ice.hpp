#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	private:

	public:
		Ice();
		~Ice();
		Ice(const Ice& source);
		Ice& operator=(const Ice& source);
		
		void use(ICharacter& target);
		AMateria*	clone() const;
};

#endif
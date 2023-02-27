#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		void use(ICharacter& target);
		Ice*	clone() const;

		Ice();
		~Ice();
		Ice(const Ice& source);
		Ice& operator=(const Ice& source);

	private:

};

#endif
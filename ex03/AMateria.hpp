#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"

# include <string>

class AMateria
{
	public:
		std::string const & getType() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

		AMateria();
		virtual ~AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria& source);
		AMateria& operator=(const AMateria& source);

	protected:
		std::string		type_;
};

#endif 
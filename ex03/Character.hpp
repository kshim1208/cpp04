#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

# include <string>

class Character : public ICharacter
{
	private:
		std::string	name_;
	public:
		Character();
		~Character();
		Character(const Character& source);
		Character& operator=(const Character& source);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, Character& target);
};

#endif
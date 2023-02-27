#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

# include "AMateria.hpp"

# include "LListAMateria.hpp"

# include <string>

# define INVENTORY_SIZE 4

class Character : public ICharacter
{
	public:
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		void setFloor(LListAMateria* floor);

		virtual Character* clone();

		Character();
		~Character();
		Character(const std::string& name);
		Character(const Character& source);
		Character& operator=(const Character& source);

	private:
		std::string	name_;
		AMateria* inventory_[INVENTORY_SIZE];
		LListAMateria*	floor_;
		void	setNullInventory(void);
		void	deepCopyInventory(const Character& source);
};

#endif
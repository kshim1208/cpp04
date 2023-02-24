#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

# include "AMateria.hpp"

# include "LList.hpp"

# include <string>

# define INVENTORY_SIZE 4

class Character : public ICharacter
{
	public:
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		void setFloor(LList* floor);

		Character();
		~Character();
		Character(const std::string& name);
		Character(const Character& source);
		Character& operator=(const Character& source);

	private:
		std::string	name_;
		AMateria* inventory_[INVENTORY_SIZE];
		LList*	floor_;
		void	setNullInventory(void); // 나중에 안쓰는 테스트 해보기
		void	deepCopyInventory(const Character& source);
};

#endif
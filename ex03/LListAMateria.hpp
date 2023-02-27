#ifndef LLISTAMATERIA_HPP
# define LLISTAMATERIA_HPP

# include "LList.hpp"

# include "string"

class LListAMateria : public LList
{
	private:
		void	(*printAMateria)(void *);
	public:
		void	setPrintAMateria(void (*print)(void *));
		void	printNodeContentAMateria(void);

		LListAMateria();
		~LListAMateria();
		LListAMateria(const LListAMateria& source);
		LListAMateria(void (*del)(void *), void (*print)(void *));
		LListAMateria& operator=(const LListAMateria& source);
};

#endif
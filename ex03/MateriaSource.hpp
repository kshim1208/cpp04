#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"

# include "IMateriaSource.hpp"

# include <string>

# define MATERIA_SOURCE_SIZE 4

class MateriaSource : public IMateriaSource
{
	public:
		void learnMateria(AMateria* materia);
		AMateria* createMateria(std::string const & type);

		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource& source);
		MateriaSource& operator=(const MateriaSource& source);

	private:
		AMateria* materiaSource_[MATERIA_SOURCE_SIZE];

		void setNullSources();
		void shallowCopySources(const MateriaSource& source);
};

#endif
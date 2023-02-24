#include "MateriaSource.hpp"
#include "AMateria.hpp"

void MateriaSource::learnMateria(AMateria* materia)
{
	for (int i = 0; i < MATERIA_SOURCE_SIZE; i++)
	{
		if (this->materiaSource_[i] != NULL)
			this->materiaSource_[i] = materia;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < MATERIA_SOURCE_SIZE; i++)
	{
		if (this->materiaSource_[i]->getType() == type)
			return (this->materiaSource_[i]->clone());
	}
}


void	MateriaSource::setNullSources(void)
{
	for (int i = 0; i < MATERIA_SOURCE_SIZE; i++)
	{
		this->materiaSource_[i] = NULL;
	}
}

void	MateriaSource::shallowCopySources(const MateriaSource& source)
{
	for (int i = 0; i < MATERIA_SOURCE_SIZE; i++)
	{
		if (this->materiaSource_[i] != NULL)
			this->materiaSource_[i] = NULL;
		if (source.materiaSource_[i] != NULL)
			this->materiaSource_[i] = source.materiaSource_[i];
	}
}

MateriaSource::MateriaSource()
{
	this->setNullSources();
}

MateriaSource::~MateriaSource()
{
}

MateriaSource::MateriaSource(const MateriaSource& source)
{
	this->shallowCopySources(source);
}

MateriaSource& MateriaSource::operator=(const MateriaSource& source)
{
	this->shallowCopySources(source);
	return (*this);
}	

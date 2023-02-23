
#include "Brain.hpp"

#include <iostream>
#include <cstdlib>

Brain::Brain()
{
	int	tmp;

	for (int i = 0; i < FT_BRAIN_IDEAS; i++)
	{
		tmp = rand() % 3;
		switch (tmp)
		{
			case 0:
				this->ideas[i] = "FOOD";
				break;
			case 1:
				this->ideas[i] = "SLEEP";
				break;
			case 2:
				this->ideas[i] = "PLAY";
				break;
			default:
				this->ideas[i] = "......";
				break;
		}
	}
	std::cout << "Brain - Brain has been created !!!" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain - Brain has been destroyed....." << std::endl;
}

Brain::Brain(const Brain& source)
{
	for (int i = 0; i < FT_BRAIN_IDEAS; i++)
	{
		this->ideas[i] = source.ideas[i];
	}
	std::cout << "Brain - Brain has been copy-created !!!" << std::endl;
}

Brain& Brain::operator=(const Brain& source)
{
	for (int i = 0; i < FT_BRAIN_IDEAS; i++)
	{
		this->ideas[i] = source.ideas[i];
	}
	std::cout << "Brain - Brain has been copy-operator-created !!!" << std::endl;
	return (*this);
}

std::string	Brain::thinkIdea(unsigned int index) const
{
	std::string	idea = this->ideas[index];
	return (idea);
}
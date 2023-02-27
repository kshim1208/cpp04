
#include "LListAMateria.hpp"

#include <iostream>

void	LListAMateria::setPrintAMateria(void (*print)(void *))
{
	this->printAMateria = print;
}

void	LListAMateria::printNodeContentAMateria(void)
{
	Node*	tmp;

	tmp = this->LList::head;
	for (unsigned int i = 0; i < this->size; i++)
	{
		std::cout << "item on floor " << i << " - ";
		(this->printAMateria)(tmp->content);
		tmp = tmp->next_node;
	}
}



LListAMateria::LListAMateria()
{
	this->head = NULL;
	this->size = 0;
	this->printAMateria = NULL;
}

LListAMateria::~LListAMateria()
{
	this->listClear();
}

LListAMateria::LListAMateria(void (*del)(void *), void (*print)(void *))
{
	this->head = NULL;
	this->size = 0;
	this->del = del;
	this->printAMateria = print;
}

LListAMateria::LListAMateria(const LListAMateria& source)
{
	this->head = source.head;
	this->size = source.size;
	this->del = source.del;
	this->printAMateria = source.printAMateria;
}

LListAMateria& LListAMateria::operator=(const LListAMateria& source)
{
	this->head = source.head;
	this->size = source.size;
	this->del = source.del;
	this->printAMateria = source.printAMateria;
	return (*this);
}
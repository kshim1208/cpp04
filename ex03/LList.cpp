
#include "LList.hpp"

#include <iostream>

LList::Node::Node()
{
	this->content = NULL;
	this->next_node = NULL;
}

LList::Node::~Node()
{
}

LList::Node::Node(const Node& source)
{
	this->content = source.content;
	this->next_node = source.next_node;
}

LList::Node& LList::Node::operator=(const Node& source)
{
	this->content = source.content;
	this->next_node = source.next_node;
	return (*this);
}

LList::LList()
{
	this->head = NULL;
	this->size = 0;
}

LList::~LList()
{
	this->listClear();
}

LList::LList(void (*del)(void *))
{
	this->head = NULL;
	this->size = 0;
	this->del = del;
}

LList::LList(const LList& source)
{
	this->head = source.head;
	this->size = source.size;
	this->del = source.del;
}

LList& LList::operator=(const LList& source)
{
	this->head = source.head;
	this->size = source.size;
	this->del = source.del;
	return (*this);
}

void	LList::setDelNodeFunction(void (*del)(void *))
{
	this->del = del;
}


LList::Node*	LList::newNode(void* content)
{
	Node*	tmp = new Node;

	tmp->content = content;
	return (tmp);
}

void	LList::listAddFront(void* content)
{
	Node	*tmp = NULL;
	Node	*new_node = NULL;

	new_node = this->newNode(content);
	this->size++;
	if (this->head == NULL)
	{
		this->head = new_node;
		return ;
	}
	tmp = this->head;
	this->head = new_node;
	new_node->next_node = tmp;
}

void	LList::listDelOne(Node* node)
{
	if (this->del == NULL)
	{
		return ;
	}
	if (node != NULL)
	{
		del (node->content);
		node->content = NULL;
		delete node;
	}
	this->size--;
}

void	LList::listClear()
{
	Node*	tmp = NULL;

	tmp = this->head;
	if (this->del == NULL)
	{
		return ;
	}
	while (tmp != NULL)
	{
		this->listDelOne(tmp);
		tmp = tmp->next_node;
	}
	head = NULL;
}

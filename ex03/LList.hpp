#ifndef LList_HPP
# define LList_HPP

#include "string"

class LList
{
	protected:
		class Node
		{
			public:
				void*	content;
				Node*	next_node;
				Node();
				~Node();
				Node(const Node& source);
				Node& operator=(const Node& source);
		};
		unsigned int	size;
		Node*	head;
		void	(*del)(void *);
	public:
		void	setDelNodeFunction(void (*del)(void *));
		Node*	newNode(void* content);
		void	listAddFront(void *content);
		void	listDelOne(Node* node);
		void	listClear();

		LList();
		~LList();
		LList(const LList& source);
		LList(void (*del)(void *));
		LList& operator=(const LList& source);
		
};

#endif
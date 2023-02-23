#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

# define FT_BRAIN_IDEAS 100

class Brain
{
	private:
		std::string	ideas[FT_BRAIN_IDEAS];
	public:
		Brain();
		~Brain();
		Brain(const Brain& source);
		Brain& operator=(const Brain& source);
		std::string	thinkIdea(unsigned int index) const;
};


#endif
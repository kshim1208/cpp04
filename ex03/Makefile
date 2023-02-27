NAME = Interface_and_recap
CPPC = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm
RMFLAGS = -f

SRCS = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp LList.cpp LListAMateria.cpp MateriaSource.cpp

OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	$(CPPC) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o	: %.cpp
	$(CPPC) $(CPPFLAGS) $(INCLUDE) -c $< -o $@

all : $(NAME)

clean:
	$(RM) $(RMFLAGS) $(OBJS)

fclean: clean
	$(RM) $(RMFLAGS) $(NAME)

re:
	make fclean
	make all

.PHONY:all clean fclean re
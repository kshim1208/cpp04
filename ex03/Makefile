NAME = Interface_and_recap
CPPC = c++
CFLAGS = -Wall -Werror -Wextra -g
RM = rm
RMFLAGS = -f

SRCS = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp LList.cpp MateriaSource.cpp

OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	$(CPPC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o	: %.cpp
	$(CPPC) $(CFLAGS) $(INCLUDE) -c $< -o $@

all : $(NAME)

clean:
	$(RM) $(RMFLAGS) $(OBJS)

fclean: clean
	$(RM) $(RMFLAGS) $(NAME)

re:
	make fclean
	make all

.PHONY:all clean fclean re
NAME = I_dont_want_to_set_the_world_on_fire
CPPC = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm
RMFLAGS = -f

SRCS = main.cpp Dog.cpp Cat.cpp Animal.cpp Brain.cpp WrongAnimal.cpp WrongCat.cpp

OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	$(CPPC) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o	: %.cpp
	$(CPPC) $(CPPFLAGS) -c $< -o $@

all : $(NAME)

clean:
	$(RM) $(RMFLAGS) $(OBJS)

fclean: clean
	$(RM) $(RMFLAGS) $(NAME)

re:
	make fclean
	make all

.PHONY:all clean fclean re
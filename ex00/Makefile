NAME = Polymorphism
CPPC = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm
RMFLAGS = -f

SRCS = main.cpp Dog.cpp Cat.cpp Animal.cpp WrongAnimal.cpp WrongCat.cpp

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
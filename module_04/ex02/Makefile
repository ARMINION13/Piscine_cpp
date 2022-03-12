NAME = AnimalNotInstantiable

all : $(NAME)

CXX = clang++ 

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror 

TRAP = -Wshadow -Wno-shadow

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp\

OBJS = main.o Animal.o Cat.o Dog.o Brain.o\

$(OBJS) : $(SRCS)

$(NAME) : $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $@


# - - - - - - - - - - - - - - - - - #
# - - - - C L E A N I N G - - - - - #
# - - - - - - - - - - - - - - - - - #


make fclean:
	@rm -f $(NAME)
	@rm -f $(OBJS)

re:	fclean all
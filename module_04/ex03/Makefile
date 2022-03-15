NAME = FFVI

all : $(NAME)

CXX = clang++ 

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror 

TRAP = -Wshadow -Wno-shadow

SRCS = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp ICharacter.cpp\
	IMateriaSource.cpp MateriaSource.cpp\

OBJS = main.o AMateria.o Character.o Cure.o Ice.o ICharacter.o\
	IMateriaSource.o MateriaSource.o\

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
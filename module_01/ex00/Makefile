NAME = zombies

all : $(NAME)

CXX = clang++ 

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS = main.cpp \
	 newZombie.cpp \
	 randomChump.cpp \
		Zombie.cpp \

OBJS = main.o \
	newZombie.o \
	randomChump.o \
		Zombie.o \

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
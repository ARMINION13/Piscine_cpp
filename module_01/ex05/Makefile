NAME = Karen

all : $(NAME)

CXX = clang++ 

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS = main.cpp karen.cpp\

OBJS = main.o karen.o\

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
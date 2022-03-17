NAME = Intern

all : $(NAME)

CXX = clang++ 

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror 

TRAP = -Wshadow -Wno-shadow

SRCS = main.cpp Bureacrat.cpp Form.cpp ShrubberyCreationForm.cpp\
	RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp\

OBJS = main.o Bureacrat.o Form.o ShrubberyCreationForm.o\
	RobotomyRequestForm.o PresidentialPardonForm.o Intern.o\

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
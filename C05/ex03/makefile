NAME = executorform

SRCS = main.cpp\
		Bureaucrat.cpp\
		AForm.cpp\
		ShrubberyCreationForm.cpp\
		RobotomyRequestForm.cpp\
		PresidentialPardonForm.cpp\
		Intern.cpp\
		
HEADER	= Bureaucrat.hpp\
			AForm.hpp\
			ShrubberyCreationForm.hpp\
			RobotomyRequestForm.hpp\
			PresidentialPardonForm.hpp\
			Intern.hpp\

OBJS = $(SRCS:.cpp=.o)

CC = c++
RM = rm -rf
CFLAGS = -std=c++98 -Wall -Wextra -Werror -g


all: $(NAME)

%.o: %.cpp $(HEADER)
	@ $(CC) $(CFLAGS) -c $<

$(NAME): $(OBJS) 
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) 

clean: 
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

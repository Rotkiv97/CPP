NAME = repetitive

SRCS =  main.cpp\
			ClapTrap.cpp\
			ScavTrap.cpp\
			FragTrap.cpp\
		
		
HEADER	= ClapTrap.hpp\
			ScavTrap.hpp\
			FragTrap.hpp\

OBJS = $(SRCS:.cpp=.o)
#IOBJS = $(INCLUDE:.hpp =.o)

CC = c++
RM = rm -rf
CFLAGS = -std=c++98 -Wall -Wextra -Werror -g

# INCDIR = include
# HEADER := $(INCDIR)/...h

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) 

clean: 
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

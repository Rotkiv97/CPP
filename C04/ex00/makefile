NAME = polymorphism

SRCS = main.cpp\
		Animal.cpp\
		Dog.cpp\
		Cat.cpp\
		WrongCat.cpp\
		WrongAnimal.cpp\
		
HEADER	= Animal.hpp\
			Dog.hpp\
			Cat.hpp\
			WrongCat.hpp\
			WrongAnimal.hpp\

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

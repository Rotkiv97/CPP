#nome progetto
NAME = test

#file da compilare

SRCS = tests.cpp\
		Account.cpp\
		
HEADER	= Account.hpp\

OBJS = $(SRCS:.c=.o)
IOBJS = $(INCLUDE:.hpp =.o)

#compilatori
CC = c++
RM = rm -rf
CFLAGS = -std=c++98 -Wall -Wextra -Werror -g

# INCDIR = include
# HEADER := $(INCDIR)/...h

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	@ $(CC) $(CFLAGS) $(OBJS)  -o $(NAME) 

clean: 
	@$(RM) $(OBJS)

fclean: 
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

#nome progetto
NAME = brain

#file da compilare

SRCS = main.cpp\


OBJS = $(SRCS:.c=.o)
IOBJS = $(INCLUDE:.hpp =.o)

#compilatori
CC = c++
RM = rm -rf
CFLAGS = -std=c++98 -Wall -Wextra -Werror -g

# INCDIR = include
# HEADER := $(INCDIR)/...h

all: $(NAME)

$(NAME): $(OBJS)
	@ $(CC) $(CFLAGS) $(OBJS)  -o $(NAME) 

clean: 
	@$(RM) $(OBJS)

fclean: 
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

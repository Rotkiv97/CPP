#nome progetto
NAME = deku

#file da compilare

SRCS = main.cpp\
		utils.cpp\

HEADER	= utils.h

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

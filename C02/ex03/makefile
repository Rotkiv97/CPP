NAME = fixed03


SRCS = main.cpp\
		Fixed.cpp\
		Point.cpp\
		bsp.cpp\
		
HEADER	= Fixed.hpp\
			Point.hpp\

OBJS = $(SRCS:.cpp=.o)
#IOBJS = $(INCLUDE:.hpp =.o)


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

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

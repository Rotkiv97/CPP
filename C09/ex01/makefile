NAME = RPN

SRCS = main.cpp\
		RPN.cpp\
		
HEADER	= RPN.hpp\

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

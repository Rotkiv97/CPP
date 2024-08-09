NAME = identifier

SRCS =  main.cpp\
		Base.cpp\
		ABC_function.cpp\
		
HEADER	= Base.hpp\
			A.hpp\
			B.hpp\
			C.hpp\

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

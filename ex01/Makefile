SRCS = *.cpp
NAME = repertory
CC = c++ -Wall -Werror -Wextra -std=c++98
OBJS = $(SRCS:.cpp =.o)

all: $(NAME) $(OBJS)
	$(CC) $(OBJS) -o $(NAME)
$(NAME) : $(OBJS)



clean:
	@rm -rf $(NAME)


fclean: clean


re : fclean all
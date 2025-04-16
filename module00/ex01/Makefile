SRCS = *.cpp
NAME = repertory
CC = c++ -Wall -Werror -Wextra -std=c++98 -g3
OBJS = $(SRCS:.cpp =.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean:
	@rm -rf *.o

fclean: clean
	@rm -rf $(NAME)

re: fclean all

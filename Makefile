SRCS = *.cpp
NAME = repertory
CC = c++ -Wall -Werror -Wextra -std=c++98

all: $(NAME) $(SRCS)
$(CC) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)


fclean: clean



re : fclean all
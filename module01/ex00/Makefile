SRCS = main.cpp	newZombie.cpp randomChump.cpp Zombie.cpp
NAME = zombie
CC = c++ -Wall -Werror -Wextra -std=c++98 -g3
OBJS = $(SRCS:.cpp =.o)

all: $(NAME) $(OBJS)
	$(CC) $(OBJS) -o $(NAME)
$(NAME) : $(OBJS)



clean:
	@rm -rf $(NAME)


fclean: clean


re : fclean all
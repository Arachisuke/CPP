NAME    =   megaphone

R       =   $(shell tput setaf 1)  
G       =   $(shell tput setaf 2)  
X       =   $(shell tput sgr0)     
BOLD    =   $(shell tput bold)

CC      =   c++
FLAGS   =   $(WFLAGS) $(STDFLAG)
WFLAGS  =   -Wall -Wextra -Werror -g3
STDFLAG =   -std=c++98

SRCS    =   megaphone.cpp

$(NAME):    $(SRCS)
	@$(CC) $(FLAGS) -o $@ $^
	@echo "$(G)$(BOLD)$(NAME)$(X) created$(X)"

all:    $(NAME)

clean:

fclean:  clean
	@rm -rf $(NAME)
	@echo "$(R)$(BOLD)$(NAME)$(X) removed$(X)"

re:    fclean all

.PHONY: all clean fclean re

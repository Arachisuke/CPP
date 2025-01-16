NAME    =   megaphone

# Colors using tput
R       =   $(shell tput setaf 1)  # Rouge
G       =   $(shell tput setaf 2)  # Vert
X       =   $(shell tput sgr0)     # Réinitialisation
BOLD    =   $(shell tput bold)     # Gras

# Compilation
CC      =   c++
FLAGS   =   $(WFLAGS) $(STDFLAG)
WFLAGS  =   -Wall -Wextra -Werror
STDFLAG =   -std=c++98

# Folders and Sources
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

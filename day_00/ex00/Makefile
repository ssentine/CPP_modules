NAME = megaphone
FLAGS = -Wall -Wextra -Werror
SRCS = megaphone.cpp 
.PHONY: all fclean re

all: $(NAME)
	
$(NAME):
		clang++ $(FLAGS) $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all
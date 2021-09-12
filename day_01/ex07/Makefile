NAME = replacer
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp 
.PHONY: all fclean re

all: $(NAME)
	
$(NAME):
		clang++ $(FLAGS) $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)
	rm -f *.replace

re: fclean all
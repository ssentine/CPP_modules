NAME = serializer
FLAGS = -Wall -Wextra -Werror
SRCS =	main.cpp

.PHONY: all clean fclean re

all: $(NAME)
	
$(NAME):  
		clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all
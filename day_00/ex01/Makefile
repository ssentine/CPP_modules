NAME = phonebook
FLAGS = -Wall -Wextra -Werror
SRCS =	main.cpp \
		PhoneBook.cpp \
		Contact.cpp

HEADER = PhoneBook.hpp \
		 Contact.hpp

OBJS := $(SRCS:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME)
	
$(NAME): $(OBJS) $(HEADER)
		clang++ $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp %.hpp
	clang++ $(FLAGS) -o $@ -c $<

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
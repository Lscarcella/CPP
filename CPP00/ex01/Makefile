CFLAGS = -std=c++98 -Wall -Werror -Wextra -g
CC = c++
RM = rm -rf
SRC_DIR = ./src/
NAME = phonebook
SRC =  $(SRC_DIR)PhoneBook.cpp $(SRC_DIR)Contact.cpp $(SRC_DIR)main.cpp 

all: $(NAME)

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

 %.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@ 

clean:
	@$(RM) $(OBJ)

fclean:
	@$(RM) $(OBJ) $(NAME)

re: fclean all
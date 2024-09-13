CFLAGS = -std=c++98 -Wall -Werror -Wextra -g
CC = c++
RM = rm -rf 
SRC_DIR = ./src/
SRC = $(SRC_DIR)main.cpp $(SRC_DIR)Zombie.cpp $(SRC_DIR)zombieHorde.cpp
NAME = brainz

all : $(NAME)

OBJ = $(SRC:.cpp=.o)

$(NAME):$(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean: 
	@$(RM) $(OBJ)

fclean :
	@$(RM) $(OBJ) $(NAME)

re: fclean all
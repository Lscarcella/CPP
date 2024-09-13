CFLAGS = -std=c++98 -Wall -Werror -Wextra -g
CC = c++
RM = rm -rf 
SRC_DIR = ./src/
SRC = $(SRC_DIR)main.cpp $(SRC_DIR)HumanA.cpp $(SRC_DIR)HumanB.cpp $(SRC_DIR)Weapon.cpp
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
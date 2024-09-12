CFLAGS = -std=c++98 -Wall -Werror -Wextra -g
CC = c++
SRC_DIR = ./src/
RM = rm -rf
SRC = $(SRC_DIR)main.cpp  $(SRC_DIR)newZombie.cpp  $(SRC_DIR)randomChump.cpp  $(SRC_DIR)Zombie.cpp	
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

re : fclean all
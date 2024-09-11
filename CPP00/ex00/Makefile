CFLAGS = -std=c++98 -Wall -Werror -Wextra -g
CC = c++
RM = rm -rf
SRC_DIR = ./src/
NAME = a.out
SRC =  $(SRC_DIR)megaphone.cpp

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
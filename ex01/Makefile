CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = zombie.cpp zombieHorde.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)

NAME = zombieHorde

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

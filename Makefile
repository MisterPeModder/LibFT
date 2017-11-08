SRCS = 
OBJS = $(SRCS:.c=.o)

NAME = libft.a

CC = gcc
LC = ar rcs
RL = ranlib
RM = rm -Rf

all: objects
	$(LC) $(NAME) $(OBJS)
	$(RL) $(NAME)

objects:
	$(CC) -c $(SRCS)

$(NAME): all

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

.PHONY: all objects clean fclean

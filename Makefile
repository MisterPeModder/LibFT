SRCS = ft_memset.c ft_bzero.c ft_memcpy.c \
	   ft_memccpy.c ft_memmove.c ft_memchr.c \
	   ft_memcmp.c ft_strdup.c ft_strlen.c \
	   ft_strcpy.c ft_strncpy.c ft_strcat.c \
	   ft_strncat.c ft_strlcat.c ft_strchr.c \
	   ft_strrchr.c ft_strstr.c ft_strnstr.c \
	   ft_strcmp.c ft_strncmp.c ft_atoi.c \
	   ft_putchar.c ft_putchar_fd.c ft_putstr.c \
	   ft_putstr_fd.c ft_putendl.c ft_putendl_fd.c \
	   ft_putnbr.c ft_putnbr_fd.c \

OBJS = $(SRCS:.c=.o)

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra

LC = ar rcs
RL = ranlib
RM = rm -Rf

$(NAME):
	@echo "Compiling $(NAME) with:\n" $(addsuffix "\n", $(SRCS))
	@$(CC) $(CFLAGS) -c $(SRCS)
	@$(LC) $(NAME) $(OBJS)
	@$(RL) $(NAME)
	@echo "Successfully created $(NAME)!"

all: $(NAME)

clean:
	@$(RM) $(OBJS)
	@echo "Removed object files."

fclean: clean
	@$(RM) $(NAME)
	@echo "Removed $(NAME)."

re: fclean all

.PHONY: all clean fclean re

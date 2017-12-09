NAME = libft.a

SRC_PATH = srcs
OBJ_PATH = bin
INC_PATH = includes

SRC_NAMES = ft_memset.c ft_bzero.c ft_memcpy.c \
			ft_memccpy.c ft_memmove.c ft_memchr.c \
			ft_memcmp.c ft_strdup.c ft_strlen.c \
			ft_strcpy.c ft_strncpy.c ft_strcat.c \
			ft_strncat.c ft_strlcat.c ft_strchr.c \
			ft_strrchr.c ft_strstr.c ft_strnstr.c \
			ft_strcmp.c ft_strncmp.c ft_atoi.c \
			ft_isalpha.c ft_isdigit.c ft_isalnum.c \
			ft_isascii.c ft_isprint.c ft_isspace.c \
			ft_putchar.c ft_putchar_fd.c ft_putstr.c \
			ft_toupper.c ft_tolower.c ft_memalloc.c \
			ft_memdel.c ft_strnew.c ft_strdel.c \
			ft_strmap.c ft_strmapi.c ft_strequ.c \
			ft_strnequ.c ft_strsub.c ft_strjoin.c \
			ft_strtrim.c ft_strsplit.c ft_itoa.c \
			ft_strclr.c ft_striter.c ft_striteri.c \
			ft_putstr_fd.c ft_putendl.c ft_putendl_fd.c \
			ft_putnbr.c ft_putnbr_fd.c \
			ft_lstnew.c ft_lstdelone.c ft_lstdel.c \
			ft_lstadd.c ft_lstiter.c ft_lstmap.c \
			ft_strupcase.c ft_strlowcase.c ft_lstlen.c \
			ft_lst_pushback.c ft_array_to_lst.c ft_lst_to_array.c \

OBJ_NAMES = $(SRC_NAMES:.c=.o)

SRCS = $(addprefix $(SRC_PATH)/,$(SRC_NAMES))
OBJS = $(addprefix $(OBJ_PATH)/,$(OBJ_NAMES))

LC = ar rcs
CC = gcc
CFLAGS = -Wall -Werror -Wextra
CPPFLAGS = -I$(INC_PATH)
RM = rm -f

NORM_LOG = norm.log
NORM_FILES =

all: $(NAME)

$(NAME): $(OBJS)
	@printf "\n\033[90mCompiling \033[0m$(NAME)\033[0m\n"
	@$(LC) $(NAME) $(OBJS)
	@printf "\033[32mSuccessfully created \033[4;92m$(NAME)\033[32m!\033[0m\n"

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@printf "\033[90mCreating object file \033[0m$@ "
	@$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@
	@printf "\033[32mdone!\033[0m\n"

clean:
	@$(RM) $(NORM_LOG)
	@$(RM) $(OBJS)
	@rmdir $(OBJ_PATH) 2> /dev/null || true
	@printf "\033[33mRemoved \033[93mobject files!\033[0m\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "\033[33mRemoved \033[93m$(NAME) executable!\033[0m\n\n"

re: fclean all

norm:
	@printf "\033[90mChecking \033[0mThe Norm\033[90m...\033[0m\n"
	$(eval NORM_FILES = $(SRCS) $(shell find includes -type f -name "*.h"))
	@printf "Found \033[32m%s\033[0m files!\n" $(words $(NORM_FILES))
	@$(RM) $(NORM_LOG)
	@norminette $(NORM_FILES) >> $(NORM_LOG)
	@printf "Norm Errors: "
	@cat $(NORM_LOG) | grep Error | wc -l | bc
	@printf "See \033[4m$(NORM_LOG)\033[0m for details.\n"

.PHONY: all clean fclean re norm

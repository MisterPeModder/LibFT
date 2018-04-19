NAME := libft.a

SRC_PATH := srcs
OBJ_PATH := bin
INC_PATH := includes

SRCS =
OBJS =

INCS :=	debug.h								\
		get_next_line.h						\
		libft.h								\
		libft_args/args.h					\
		libft_args/args_defs.h				\
		libft_args/args_internal.h			\
		libft_base/base.h					\
		libft_base/character.h				\
		libft_base/io.h						\
		libft_base/list.h					\
		libft_base/memory.h					\
		libft_base/stringft.h				\
		libft_containers/hashmap.h			\
		libft_containers/hashmap_internal.h	\
		libft_math/complex.h				\
		libft_math/vec2.h					\
		libft_math/vec3.h					\
		libft_math/vec4.h					\
		libft_math/vectors.h				\
		libft_math/vectype.h

INCS_FULL = $(addprefix $(INC_PATH)/, $(INCS))

#verbose mode toggle
VERBOSE = 1

ifeq ($(VERBOSE), 1)
define compile_objs_cc
	@mkdir $(OBJ_PATH) $(addprefix $(OBJ_PATH)/, $(MODULES)) 2> /dev/null || true
	@tput dl; tput cub 100; printf "\033[90mCreating object files: \033[0m$(notdir $@)"
	@$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@
endef
else
define compile_objs_cc
	@mkdir $(OBJ_PATH) $(addprefix $(OBJ_PATH)/, $(MODULES)) 2> /dev/null || true
	@$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@
endef
endif

MODULES =

#include subdirs here
-include srcs/base/base.mk
-include srcs/gnl/gnl.mk
-include srcs/math/math.mk
-include srcs/args/args.mk
-include srcs/containers/containers.mk

LC = ar rcs
CC = gcc
CFLAGS = -Wall -Wmissing-prototypes -Wsign-conversion -Werror -Wextra -g
CPPFLAGS = -iquote$(INC_PATH)
RM = rm -f

NORM_LOG = norm.log
NORM_FILES =

all: $(NAME)

dump:
	@echo $(INCS_FULL)

$(NAME): $(OBJS)
ifeq ($(VERBOSE), 1)
	@tput dl; tput cub 100; printf "\033[90mCreating object files: \033[32mdone!"
endif
	@printf "\n\033[90mCompiling \033[0m$(NAME)\033[90m: \033[0m"
	@$(LC) $(NAME) $(OBJS)
	@printf "\033[32mdone!\n"

clean:
	@$(RM) $(NORM_LOG)
	@$(RM) $(OBJS)
	@$(RM) -r *.dSYM
	@rmdir $(addprefix $(OBJ_PATH)/, $(MODULES)) $(OBJ_PATH) 2> /dev/null || true
	@rmdir $(addprefix $(OBJ_PATH)/, $(MODULES)) $(OBJ_PATH) 2> /dev/null || true
	@printf "\033[33mRemoved \033[93mobject files!\033[0m\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "\033[33mRemoved \033[93m$(NAME) library!\033[0m\n\n"

re: fclean all
	@echo $(INCS)

norm:
	@printf "\033[90mChecking \033[0mThe Norm\033[90m...\033[0m\n"
	$(eval NORM_FILES = $(SRCS) $(shell find includes -type f -name "*.h"))
	@printf "Found \033[32m%s\033[0m files!\n" $(words $(NORM_FILES))
	@$(RM) $(NORM_LOG)
	@norminette $(NORM_FILES) >> $(NORM_LOG)
	@printf "Norm Errors: "
	@cat $(NORM_LOG) | grep Error | wc -l | bc
	@printf "See \033[4m$(NORM_LOG)\033[0m for details.\n"

.PHONY: all premsg clean fclean re norm

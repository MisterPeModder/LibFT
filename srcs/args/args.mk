MODULES += args

ARGS_SRC_NAMES :=	args_add.c			\
					args_del.c			\
					args_error.c		\
					args_get.c			\
					args_init.c			\
					args_parse.c		\
					args_parse_default.c\
					args_parse_option.c	\
					args_parse_param.c	\
					args_print.c		\


ARGS_OBJ_NAMES = $(ARGS_SRC_NAMES:.c=.o)

SRCS += $(addprefix $(SRC_PATH)/args/,$(ARGS_SRC_NAMES))
OBJS += $(addprefix $(OBJ_PATH)/args/,$(ARGS_OBJ_NAMES))

$(OBJ_PATH)/args/%.o: $(SRC_PATH)/args/%.c
	$(compile_objs_cc)

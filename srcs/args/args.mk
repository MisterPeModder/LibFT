MODULES += args

ARGS_SRC_NAMES :=

ARGS_OBJ_NAMES = $(ARGS_SRC_NAMES:.c=.o)

SRCS += $(addprefix $(SRC_PATH)/args/,$(ARGS_SRC_NAMES))
OBJS += $(addprefix $(OBJ_PATH)/args/,$(ARGS_OBJ_NAMES))

$(OBJ_PATH)/args/%.o: $(SRC_PATH)/args/%.c
	$(compile_objs_cc)

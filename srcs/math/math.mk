MODULES += math

MATH_SRC_NAMES := new_vec2.c

MATH_OBJ_NAMES = $(MATH_SRC_NAMES:.c=.o)

SRCS += $(addprefix $(SRC_PATH)/gnl/,$(MATH_SRC_NAMES))
OBJS += $(addprefix $(OBJ_PATH)/gnl/,$(MATH_OBJ_NAMES))

$(OBJ_PATH)/math/%.o: $(SRC_PATH)/math/%.c
	$(compile_objs_cc)

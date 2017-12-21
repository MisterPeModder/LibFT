MODULES += math

MATH_SRC_NAMES :=	del_vec.c	\
					new_vec2.c	\
					new_vec3.c	\
					new_vec4.c	\

MATH_OBJ_NAMES = $(MATH_SRC_NAMES:.c=.o)

SRCS += $(addprefix $(SRC_PATH)/math/,$(MATH_SRC_NAMES))
OBJS += $(addprefix $(OBJ_PATH)/math/,$(MATH_OBJ_NAMES))

$(OBJ_PATH)/math/%.o: $(SRC_PATH)/math/%.c
	$(compile_objs_cc)

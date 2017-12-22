MODULES += math

MATH_SRC_NAMES :=	add_vec2.c		\
					add_vec3.c		\
					add_vec4.c		\
					add_vecnum.c	\
					addf_vec2.c		\
					addf_vec3.c		\
					addf_vec4.c		\
					del_vec.c		\
					div_vecnum.c	\
					mul_vecnum.c	\
					new_vec2.c		\
					new_vec3.c		\
					new_vec4.c		\
					sub_vecnum.c	\

MATH_OBJ_NAMES = $(MATH_SRC_NAMES:.c=.o)

SRCS += $(addprefix $(SRC_PATH)/math/,$(MATH_SRC_NAMES))
OBJS += $(addprefix $(OBJ_PATH)/math/,$(MATH_OBJ_NAMES))

$(OBJ_PATH)/math/%.o: $(SRC_PATH)/math/%.c
	$(compile_objs_cc)

MODULES += math

MATH_SRC_NAMES :=	add_vec2.c		\
					add_vec3.c		\
					add_vec4.c		\
					add_vecnum.c	\
					addf_vec2.c		\
					addf_vec3.c		\
					addf_vec4.c		\
					cross_product.c	\
					crossf_product.c\
					del_vec.c		\
					div_vec2.c		\
					div_vec3.c		\
					div_vec4.c		\
					div_vecnum.c	\
					divf_vec2.c		\
					divf_vec3.c		\
					divf_vec4.c		\
					mul_vec2.c		\
					mulf_vec2.c		\
					mul_vecnum.c	\
					new_vec2.c		\
					new_vec3.c		\
					new_vec4.c		\
					opf1_vecnum.c	\
					opf2_vecnum.c	\
					opf_vecnum.c	\
					sqrt_vecnum.c	\
					sub_vec2.c		\
					sub_vec3.c		\
					sub_vec4.c		\
					sub_vecnum.c	\
					subf_vec2.c		\
					subf_vec3.c		\
					subf_vec4.c		\

MATH_OBJ_NAMES = $(MATH_SRC_NAMES:.c=.o)

SRCS += $(addprefix $(SRC_PATH)/math/,$(MATH_SRC_NAMES))
OBJS += $(addprefix $(OBJ_PATH)/math/,$(MATH_OBJ_NAMES))

$(OBJ_PATH)/math/%.o: $(SRC_PATH)/math/%.c
	$(compile_objs_cc)

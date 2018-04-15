MODULES += containers

CONTAINERS_SRC_NAMES :=	hm_collisions.c	\
						hm_get.c		\
						hm_hash.c		\
						hm_length.c		\
						hm_make.c		\
						hm_put.c		\

CONTAINERS_OBJ_NAMES = $(CONTAINERS_SRC_NAMES:.c=.o)

SRCS += $(addprefix $(SRC_PATH)/containers/,$(CONTAINERS_SRC_NAMES))
OBJS += $(addprefix $(OBJ_PATH)/containers/,$(CONTAINERS_OBJ_NAMES))

$(OBJ_PATH)/containers/%.o: $(SRC_PATH)/containers/%.c $(INCS_FULL)
	$(compile_objs_cc)

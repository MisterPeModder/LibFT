MODULES += base/btree

BASE_BTREE_SRC_NAMES :=	ft_btreeadd.c		\
						ft_btreedel.c		\
						ft_btreedel2.c		\
						ft_btreeinsert.c	\
						ft_btreeinsert2.c	\
						ft_btreeiter.c		\
						ft_btreeleaf.c		\
						ft_btreenew.c		\

BASE_BTREE_OBJ_NAMES = $(BASE_BTREE_SRC_NAMES:.c=.o)

SRCS += $(addprefix $(SRC_PATH)/base/btree/,$(BASE_BTREE_SRC_NAMES))
OBJS += $(addprefix $(OBJ_PATH)/base/btree/,$(BASE_BTREE_OBJ_NAMES))

$(OBJ_PATH)/base/btree/%.o: $(SRC_PATH)/base/btree/%.c
	$(compile_objs_cc)

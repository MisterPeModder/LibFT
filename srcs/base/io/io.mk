MODULES += base/io

SRC_NAMES :=	ft_putchar.c \
				ft_putchar_fd.c \
				ft_putendl.c \
				ft_putendl_fd.c \
				ft_putnbr.c \
				ft_putnbr_fd.c \
				ft_putstr.c \
				ft_putstr_fd.c

OBJ_NAMES = $(SRC_NAMES:.c=.o)

SRCS += $(addprefix $(SRC_PATH)/base/io,$(SRC_NAMES))
OBJS += $(addprefix $(OBJ_PATH)/base/io,$(OBJ_NAMES))

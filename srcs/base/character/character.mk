MODULES += base/character

SRC_NAMES :=	ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_isspace.c \
				ft_tolower.c \
				ft_toupper.c

OBJ_NAMES = $(SRC_NAMES:.c=.o)

SRCS += $(addprefix $(SRC_PATH)/base/character/,$(SRC_NAMES))
OBJS += $(addprefix $(OBJ_PATH)/base/character/,$(OBJ_NAMES))

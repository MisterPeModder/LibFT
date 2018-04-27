# Project settings
NAME := libft.a

# Basic definitions
MODULES_PATH := modules
SRC_PATH := srcs
OBJ_PATH := bin
INC_PATH := includes

# Compiler flags
CPPFLAGS = -iquote$(INC_PATH)
CLAGS := -Wall -Wextra -Werror -std=c89 -pedantic -Wmissing-prototypes -Wsign-conversion

# Commands
CC := gcc
LC = ar rcs
RM := rm -f
RMDIR := rmdir -p
MKDIR := mkdir -p


###############################################################
#                                                             #
#                 /!\  DO NOT EDIT BELOW  /!\                 #
#                                                             #
###############################################################

SRCS :=
INCS :=
OBJS :=

# Try include the modules file.
-include $(MODULES_PATH)/modules.mk

# Throw error if not found and/or MODULES variable is not set.
ifndef MODULES
$(error MODULES is not set! You must create the $(MODULES_PATH)/modules.mk file that defines the MODULES variable.)
endif

define addmodule
	$(eval SRCS += $(addprefix $(SRC_PATH)/$(MODULE_NAME)/,$(MODULE_SRCS)));
	$(eval INCS += $(addprefix $(INC_PATH)/,$(MODULE_INCS)));
	$(eval OBJS += $(addprefix $(OBJ_PATH)/$(MODULE_NAME)/,$(MODULE_SRCS:.c=.o)));
endef

# Add the sources of each module.
-include $(addprefix $(MODULES_PATH)/, $(addsuffix .mk, $(MODULES)))

INCS := $(sort $(INCS))
SRCS := $(sort $(SRCS))
OBJS := $(sort $(OBJS))

# Adding all modules to vpath.
COLON := :
EMPTY :=
SPACE := $(EMPTY) $(EMPTY)
VPATH = $(subst $(SPACE),$(COLON),$(addprefix $(SRC_PATH)/,$(strip $(MODULES))))

OBJS_DIRS := $(sort $(dir $(OBJS)))

# The rules are simple, you laugh, YOU LOOSE!

all: $(NAME)

$(NAME): $(OBJS_DIRS) $(OBJS)
	@$(LC) $(NAME) $(OBJS)
	@echo $(NAME) succesfuly compiled!

$(OBJS_DIRS):
	$(MKDIR) $@

bin/%.o: srcs/%.c $(INCS)
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS) 2> /dev/null || true
	@$(RMDIR) $(OBJS_DIRS) 2> /dev/null || true
	@echo removed all objects!

fclean: clean
	@$(RM) $(NAME) 2> /dev/null || true
	@echo removed $(NAME)!

re: fclean all

debug:
	@echo includes = $(addprefix "\n", $(INCS))

.PHONY: all clean fclean re debug

NAME := unit

MAKEFLAGS += --no-builtin-rules

## Commands

CC := gcc
RM := rm -f
RMDIR := rmdir -p
MKDIR := mkdir -p

# Compiler flags
CPPFLAGS = -iquote. -I../includes
CFLAGS := -Wall -Wextra -Werror -Wsign-conversion
LDFLAGS := -L.. -lft


## Sources and includes

SRCS :=	args.c		\
		child.c		\
		colors.c	\
		launchers.c	\
		main.c		\
		unit_test.c	\

INCLUDES := launchers.h

## INCLUDE LAUNCHERS HERE ##

-include launchers/basic.mk
-include launchers/libft_string.mk

## END ##

OBJ_PATH := .bin
OBJS := $(addprefix $(OBJ_PATH)/,$(SRCS:.c=.o))
OBJS_DIRS := $(sort $(dir $(OBJS)))

vpath %.o $(OBJS_DIRS)
vpath %.c $(sort $(dir $(SRCS)))

all: $(NAME)

test:
	@echo "objs: $(OBJS)"
	@echo "objs dirs: $(OBJS_DIRS)"

$(NAME): $(OBJS_DIRS) $(OBJS)
	@$(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

$(OBJS_DIRS):
	@$(MKDIR) $@

$(OBJ_PATH)/%.o: %.c
	@echo "Compiling $<..."
	@$(CC) -c $< $(CPPFLAGS) $(CFLAGS) -o $@

clean:
	@$(RM) $(OBJS) 2> /dev/null || true
	@$(RMDIR) $(OBJS_DIRS) 2> /dev/null || true
	@echo "Removed all objects"

fclean: clean
	@$(RM) $(NAME)
	@echo "Removed $(NAME) executable"

re: fclean all

.PHONY: all clean fclean

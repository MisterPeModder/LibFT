INCLUDES += tests/basic/tests.h

SRCS +=	launchers/basic.c				\
		tests/basic/always_ko.c			\
		tests/basic/always_ok.c			\
		tests/basic/always_segv.c		\
		tests/basic/always_sigabort.c	\
		tests/basic/infinite_loop.c		\

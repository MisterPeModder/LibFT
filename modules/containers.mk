MODULE_NAME =	containers

MODULE_SRCS =	hm_collisions.c	\
				hm_get.c		\
				hm_grow.c		\
				hm_hash.c		\
				hm_iter.c		\
				hm_length.c		\
				hm_make.c		\
				hm_put.c		\
				hm_release.c	\

MODULE_INCS :=	libft_containers/hashmap.h			\
				libft_containers/hashmap_internal.h	\

$(call addmodule) ## DO NOT EDIT THIS LINE

MODULE_NAME :=	base

PARENT_NAME :=	base
SUBMODULES :=	character	\
				io			\
				list		\
				memory		\
				string		\

-include $(addprefix $(MODULES_PATH)/$(MODULE_NAME)/,$(addsuffix .mk,$(SUBMODULES)))

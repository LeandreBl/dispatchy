NAME		= libdispatchy.so

CC			= gcc

ARCHIVER	= ar

SRCS		= src/create.c
SRCS		+= src/destroy.c
SRCS		+= src/process.c

TESTS_SRCS	:= $(SRCS)

OBJS		= $(SRCS:.c=.o)
TESTS_OBJS	= $(TESTS_SRCS:.c=.o)

RM			= rm -f

CFLAGS		+= -Wall -Wextra -fPIC
CPPFLAGS	+= -I ./include $(addprefix -I,lvector/include ffcall)
LDFLAGS		= -shared -lavcall -L./ffcall/avcall

GREEN=`tput setaf 2`
RED=`tput setaf 1`
YELLOW=`tput setaf 3`
NO_COLOR=`tput sgr0`

%.o : %.c
	@$ $(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@
	@echo "$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@ ["$(GREEN)"OK"$(NO_COLOR)"]"
.SUFFIXES: .o .c

all: dependencies $(NAME)

$(NAME): $(OBJS)
	@$ $(CC) $(LDFLAGS) $(OBJS) $(LIBS) -o $@
	@echo "$(CC) $(LDFLAGS) $(OBJS) $(LIBS) -o $@ \
	["$(GREEN)"LINKING OK"$(NO_COLOR)"]"

dependencies:
	git submodule update --init --recursive
ifeq (,$(wildcard ./ffcall/Makefile))
	cd ffcall && ./configure
endif
	$(MAKE) -C ffcall

tests_run: dependencies $(TESTS_OBJS)
	$(MAKE) -C lvector $@
	$(MAKE) -C ffcall check
	@$ $(CC) -lcriterion $(TESTS_OBJS) $(LIBS) -o $@
	@echo "$(CC) -lcriterion $(TESTS_OBJS) $(LIBS) -o $@ \
	["$(GREEN)"LINKING OK"$(NO_COLOR)"]"
	./$@
	@$(RM) $@
	@$(RM) $(TESTS_OBJS)

val_run: CFLAGS += -g3
val_run: dependencies $(TESTS_OBJS)
	$(MAKE) -C lvector $@
	$(MAKE) -C ffcall check
	@$ $(CC) -lcriterion $(TESTS_OBJS) $(LIBS) -o $@
	@echo "$(CC) -lcriterion $(TESTS_OBJS) $(LIBS) -o $@ \
	["$(GREEN)"LINKING OK"$(NO_COLOR)"]"
	valgrind --trace-children=yes --quiet ./$@
	@$(RM) $@
	@$(RM) $(TESTS_OBJS)

debug: CFLAGS += -g3
debug: re

clean:
	$(MAKE) -C lvector $@
ifneq (,$(wildcard ./ffcall/Makefile))
	$(MAKE) -C ffcall $@
endif
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(NAME:.so=.a)

re: fclean all

install: all
	git submodule foreach make $@
	@cp $(NAME) /usr/lib/$(NAME) 2> /dev/null || \
	printf "\033[1m\033[31mError : try sudo make install\033[0m\n" && \
	cp include/*.h /usr/include/ 2> /dev/null && \
	printf "\033[1m\033[32mLibrary $(NAME) successfully installed !\033[0m\n"

static: $(OBJS)
	$(ARCHIVER) rc $(NAME:.so=.a) $(OBJS)

.PHONY: all clean fclean re tests_run val_run debug install static
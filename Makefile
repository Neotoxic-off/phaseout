##
## EPITECH PROJECT, 2020
## phaseout
## File description:
## Makefile
##

OBJS	=	$(patsubst %.c, %.o, $(shell find src -type f -name "*.c"))

LIBNAME	=	phaseout.a
LIBPATH	=	./lib/phaseout/

HFILE	=	$(patsubst %.c, %.o, $(shell find include -type f -name "*.h"))

NAME	=	test

CFLAGS	=	-I ./include
CFLAGS	+=	-g3
CFLAGS	+=	-Wall -Wextra -O3 -fno-builtin

CC	=	@clang
RM	=	@rm -f

all:	$(NAME)

$(NAME):	$(OBJS)
	@$(MAKE) -C $(LIBPATH) --no-print-directory
	$(CC) -o $(NAME) $(OBJS) $(LIBPATH)$(LIBNAME)

$(OBJS): $(HFILE)

clean:
	@$(MAKE) clean -C $(LIBPATH) --no-print-directory
	@$(RM) $(OBJS)
	@echo "\e[32m[ DONE ]\033[0m  Cleanned"

fclean:
	@$(MAKE) fclean -C $(LIBPATH) --no-print-directory
	@$(RM) $(OBJS)
	@$(RM) $(NAME)
	@echo "\e[32m[ DONE ]\033[0m  Cleanned"

re:	fclean all

.c.o:	%.c
	@$(CC) -c $< -o $@ $(CFLAGS) && echo "\e[32m[ DONE ] \033[0m" $< || echo "\e[91;5m[ FAIL ] \e[25m" $< "\033[0m"

.PHONY: all clean fclean re

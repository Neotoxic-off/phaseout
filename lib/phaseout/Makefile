##
## EPITECH PROJECT, 2020
## phaseout
## File description:
## Makefile
##

OBJS	=	$(patsubst %.c, %.o, $(shell find . -type f -name "*.c"))

HFILE	=	$(wildcard $(INCLUDE)/*.h)

INCLUDE	=	include

NAME 	=	phaseout.a

INC_FLAG	=	-I ../../$(INCLUDE)

OBJ_FLAG	=	-g3
OBJ_FLAG	+=	-Weverything
OBJ_FLAG	+=	-Wno-gnu
OBJ_FLAG	+=	-march=native

CC		=	@clang
AR		=	@ar rc
RM		=	@rm -f

all:	$(NAME)

$(NAME):	$(OBJS)
	@$(AR) $(NAME) $(OBJS)

$(OBJS): $(HFILE)

clean:
	@$(RM) $(OBJS)
	@echo "\e[32m[ DONE ]\033[0m  Cleanned *.o"

fclean: clean
	@$(RM) $(NAME)
	@echo "\e[32m[ DONE ]\033[0m  Cleanned $(NAME)"

re:	fclean all

.c.o:	%.c
	@$(CC) -c $< -o $@ $(OBJ_FLAG) $(INC_FLAG) && echo "\e[32m[ DONE ] \033[0m" $< || echo "\e[91;5m[ FAIL ] \e[25m" $< "\033[0m"

.PHONY: all clean fclean re

##
## EPITECH PROJECT, 2020
## phaseout
## File description:
## Makefile
##

OBJS	=	$(patsubst %.c, %.o, $(wildcard ./*.c))

HFILE	=	../../include/PHASEOUT.h
HFILE	+=	../../include/STATUS.h

NAME 	=	phaseout.a

CFLAGS	=	-I ../../include
CFLAGS	+=	-g3
CFLAGS	+=	-Wall -Wextra -O3 -fno-builtin

CC		=	@gcc
AR		=	@ar rc
RM		=	@rm -f

all:	$(NAME)

$(NAME):	$(OBJS)
	@$(AR) $(NAME) $(OBJS)

$(OBJS): $(HFILE)

clean:
	@$(RM) $(OBJS)
	@echo "\e[32m[ DONE ]\033[0m Cleanned"

fclean:
	@$(RM) $(OBJS)
	@rm -f $(NAME)
	@echo "\e[32m[ DONE ] \033[0m Cleanned"

re:	fclean all

.c.o:	%.c
	@$(CC) -c $< -o $@ $(CFLAGS) && echo "\e[32m[ DONE ] \033[0m" $< || echo "\e[91;5m[ FAIL ] \e[25m" $< "\033[0m"

.PHONY: all clean fclean re

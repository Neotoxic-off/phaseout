OBJS	=	$(patsubst %.c, %.o, $(wildcard ./*.c))

NAME 	=	phaseout.a

CFLAGS	=	-I .
CFLAGS	+=	-g3
CFLAGS	+=	-Wall -Wextra -O3 -fno-builtin

CC		=	@gcc
AR		=	@ar rc
RM		=	@rm -f

all:	$(NAME)

$(NAME):	$(OBJS)
	@$(AR) $(NAME) $(OBJS)

$(OBJS): PHASEOUT.h

clean:
	@$(RM) $(OBJS)
	@echo "\e[32m[OK]\033[0m Cleanned"

fclean:
	@$(RM) $(OBJS)
	@rm -f $(NAME)
	@echo "\e[32m[OK]\033[0m Cleanned"

re:	fclean all

.c.o:	%.c
	@$(CC) -c $< -o $@ $(CFLAGS) && echo "\e[32m[OK]\033[0m" $< || echo "\e[91;5m[KO]\e[25m" $< "\033[0m"

.PHONY: all clean fclean re

SRCS =
OBJS	= ${SRCS:.c=.o}
BONUSES =
BOBJS	= ${BONUSES:.c=.o}
INS	= libft.h
NAME	= libftprintf.a
LIB	= ar rc
RL	= ranlib
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I.${INS}

${NAME}: ${OBJS}
	${LIB} ${NAME} ${OBJS}
	${RL} ${NAME}

all: ${NAME}

test: re ${TOBJS}
	${CC} -g ${CFLAGS} ${TOBJS} -L. -lft -o ${TNAME}

clean:
	${RM} ${OBJS}
	${RM} ${TOBJS}
	${RM} ${BOBJS}

fclean: clean
	${RM} ${NAME}
	${RM} ${TNAME}

re: fclean all

test: re ${TOBJS}
	${CC} -g ${CFLAGS} ${TOBJS} -L. -lft -o ${TNAME}

bonus: re ${BOBJS}
	${LIB} ${NAME} ${OBJS} ${BOBJS}
	${RL} ${NAME}

norm :
	norminette -R CheckForbiddenSourceHeader *.c
	norminette -R CheckDefine *.h

.PHONY: all re clean fclean
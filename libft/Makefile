SRCS	= ${wildcard *.c}
OBJS	= ${SRCS:.c=.o}
INCS	= ${wildcard *.h}
NAME	= libft.a
CC	= gcc
FLAGS	= -Wall -Werror -Wextra
RM	= rm -f
LIB	= ar rc
RL	= ranlib

all: ${NAME}

.c.o:
	${CC} ${FLAGS} -c $< ${<:.c.o} -I.${INCS}

${NAME}: ${OBJS}
	${LIB} ${NAME} ${OBJS} ${LOBJS}
	${RL} ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}
	${RM} ${TNAME}

re: fclean all

.PHONY: all re clean fclean
SRCS	= ${wildcard *.c}
OBJS	= ${SRCS:.c=.o}
LIBFT	= ${wildcard libft/*.c}
LOBJS	= ${LIBFT:.c=.o}
INCS	= ${wildcard *.h}
NAME	= libftprintf.a
CC	= gcc
FLAGS	= -Wall -Werror -Wextra
RM	= rm -f
LIB	= ar rcs
RL	= ranlib

all: ${NAME}

.c.o:
	${CC} ${FLAGS} -c $< ${<:.c.o} -I.${INCS}

${NAME}: runlibft ${OBJS}
	${LIB} ${NAME} ${OBJS} ${LOBJS}
	${RL} ${NAME}

runlibft:
	make -C libft

clean:
	${RM} ${OBJS}
	${MAKE} -C libft clean

fclean: clean
	${RM} ${NAME}
	${RM} ${TNAME}
	${MAKE} -C libft fclean

re: fclean all

.PHONY: all re clean fclean
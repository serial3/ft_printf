# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dromao-l <dromao-l@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 16:29:45 by dromao-l          #+#    #+#              #
#    Updated: 2021/11/03 18:55:48 by dromao-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TESTS	= tests/test1.c
TNAME	= test
TOBJS	= ${TESTS:.c=.o}
SRCS	= ft_strchr.c ft_lstnew.c ft_isprint.c ft_strrchr.c ft_lstlast.c ft_itoa.c ft_split.c ft_atoi.c ft_putnbr_fd.c ft_bzero.c ft_putendl_fd.c ft_striteri.c ft_putstr_fd.c ft_isdigit.c ft_strmapi.c ft_putchar_fd.c ft_isalpha.c ft_strtrim.c ft_memset.c ft_isascii.c ft_strjoin.c ft_memcmp.c ft_isalnum.c ft_substr.c ft_memcpy.c ft_calloc.c ft_strnstr.c ft_memmove.c ft_strncmp.c ft_memchr.c ft_strlcat.c ft_tolower.c ft_toupper.c ft_strdup.c ft_strlcpy.c ft_strlen.c
OBJS	= ${SRCS:.c=.o}
BONUSES	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
BOBJS	= ${BONUSES:.c=.o}
INS	= libft.h
NAME	= libft.a
LIB	= ar rc
RL	= ranlib
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I.${INS}

$(NAME): ${OBJS} ${INS}
	${LIB} ${NAME} ${OBJS}
	${RL} ${NAME}

all: ${NAME}

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
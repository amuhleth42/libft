NAME	= libft.a

CFLAGS	= -Wall -Werror -Wextra

SRCS	= ft_atoi.c 			\
		  ft_isascii.c			\
		  ft_isalnum.c			\
		  ft_isalpha.c			\
		  ft_isdigit.c			\
		  ft_isprint.c			\
		  ft_tolower.c			\
		  ft_toupper.c			\


OBJS	= ${SRCS:.c=.o}

CC		= gcc -Wall -Wextra -Werror

all:	${NAME}

${NAME}:	${OBJS}
	ar -rcs $@ $^

.c.o:
	${CC} -c $< -o ${<:.c=.o}

clean:
	rm -f ${OBJS}

fclean:	clean
	rm -f ${NAME}

re:	fclean all

.PHONY:		all clean fclean re

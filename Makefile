NAME	= libft.a

CFLAGS	= -Wall -Werror -Wextra

SRCS	+= $(addprefix char/,	\
		   ft_isalnum.c			\
		   ft_isalpha.c			\
		   ft_isascii.c			\
		   ft_isdigit.c			\
		   ft_isprint.c			\
		   ft_tolower.c			\
		   ft_toupper.c)

SRCS	+= $(addprefix str/,	\
		  ft_strlen.c			\
		  ft_strtrim.c			\
		  ft_strlcat.c			\
		  ft_strchr.c			\
		  ft_strrchr.c			\
		  ft_strnstr.c			\
		  ft_atoi.c				\
		  ft_strncmp.c			\
		  ft_strdup.c			\
		  ft_strlcpy.c			\
		  ft_substr.c			\
		  ft_strjoin.c			\
		  ft_itoa.c				\
		  ft_strmapi.c			\
		  ft_striteri.c			\
		  ft_split.c)

SRCS	+= $(addprefix put/,	\
		   ft_putchar_fd.c		\
		   ft_putstr_fd.c		\
		   ft_putnbr_fd.c		\
		   ft_putendl_fd.c)

SRCS	+= $(addprefix list/,	\
		   ft_lstnew.c			\
		  ft_lstadd_front.c		\
		  ft_lstsize.c			\
		  ft_lstlast.c			\
		  ft_lstadd_back.c		\
		  ft_lstiter.c			\
		  ft_lstdelone.c		\
		  ft_lstclear.c			\
		  ft_lstmap.c)

SRCS	+= $(addprefix mem/,	\
		   ft_bzero.c			\
		   ft_calloc.c			\
		   ft_memchr.c			\
		   ft_memcpy.c			\
		   ft_memmove.c			\
		   ft_memcmp.c			\
		   ft_memset.c)

OBJS	= ${SRCS:.c=.o}

OBJS_B	= ${SRCS_B:.c=.o}

CC		= gcc -Wall -Wextra -Werror

all:	${NAME}

${NAME}:	${OBJS}
	ar -rcs $@ $^

.c.o:
	${CC} -I . -c $< -o ${<:.c=.o}

clean:
	rm -f ${OBJS}

fclean:	clean
	rm -f ${NAME}

re:	fclean all

.PHONY:		all clean fclean bonus re 

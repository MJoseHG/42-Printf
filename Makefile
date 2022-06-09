
SRCS		= ft_printf.c \
			srcs/base.c \
			srcs/utils.c \
			srcs/ft_print_char.c \
			srcs/ft_print_string.c \
			srcs/ft_print_point_hex.c \
			srcs/ft_print_int.c \
			srcs/ft_print_int_dec.c \
			srcs/ft_print_int_hex_low.c \
			srcs/ft_print_int_hex_cap.c \
			srcs/ft_print_perc.c \

OBJS		= ${SRCS:.c=.o}
NAME		= libftprintf.a
INCLUDES	= includes
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f

all: ${NAME}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@ -I ${INCLUDES}

${NAME}: ${OBJS}
	ar -rc ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean:
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re

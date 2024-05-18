NAME := libft.a
CC := cc
CFLAGS := -Wall -Werror -Wextra
SRCS := ${wildcard ft_*.c} #maybe can individually name them?
OBJS := ${SRCS:.c=.o}

# Default target
all: ${NAME}

${NAME}: ${OBJS}
	ar rcs $@ $^
${OBJS}:
	${CC} ${CFLAGS} ${SRCS} -o $@


clean:
	rm -f ${OBJS}
fclean:
	clean
	rm -f ${NAME}
re:
	fclean
	all

# Phony targets
.PHONY: all clean fclean re
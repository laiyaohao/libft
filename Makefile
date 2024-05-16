NAME := libft.a
CC := cc
CFLAGS := -Wall -Werror -Wextra
SRCS := ${wildcard ft_*.c}
OBJS := ${SRCS:.c=.o}

# Default target
all: ${NAME}

${NAME}: ${OBJS}
	ar rcs $@ $^
${OBJS}: ${CC} ${CFLAGS} $@


clean:
	rm -f ${OBJS} ${NAME}
fclean: clean
re: fclean all

# Phony targets
.PHONY: all clean
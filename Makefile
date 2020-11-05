SRC_DIR=.
OBJ_DIR=.
SRCS=$(shell find ${SRC_DIR} -name "*.c")
OBJS=${patsubst ${SRC_DIR}/%,${OBJ_DIR}/%,${SRCS:.c=.o}}
CFLAGS=-Wall -Wextra -Werror
CC=cc
AR=ar
RM=rm
NAME=libft.a

.PHONY: clean fclean all re

all: ${NAME}

so: ${OBJS}
	gcc -shared -o libft.so ${OBJS}

cleanso: fclean
	rm -f libft.so

${NAME}: ${OBJS}
	${AR} -rc ${NAME} ${OBJS}

${OBJS}: ${SRCS}
	mkdir -p ${@D}
	${CC} ${CFLAGS} -c -o $@ ${patsubst ${OBJ_DIR}/%,${SRC_DIR}/%,${@:.o=.c}}

clean:
	${RM} -f ${OBJS}

fclean: clean
	${RM} -f ${NAME}

re: fclean all

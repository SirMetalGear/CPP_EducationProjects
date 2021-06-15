SRCS	= megaphone.cpp

OBJS	= ${SRCS:.cpp=.o}

NAME	= megaphone

CC		= clang++

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

all:	${NAME}

%.o: %.cpp
		${CC} ${CFLAGS} -I. -c $< -o ${<:.cpp=.o}

${NAME}: ${OBJS}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY:		re all clean fclean
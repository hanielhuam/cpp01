CPP = c++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98
SRCS = main.cpp

OBJS = $(SRCS:%.cpp=%.o)

NAME = stringRef

all: ${NAME}

$(NAME): ${OBJS}
	$(CPP) ${CFLAGS} ${OBJS} -o ${NAME}

%.o: %.cpp
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	rm -rf ${OBJ_DIR}

fclean: clean
	rm -rf ${NAME}

re: fclean all

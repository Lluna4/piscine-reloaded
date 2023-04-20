SRCDIR = srcs
OBJDIR = srcs
HEADERDIR = headers

SRC  := $(wildcard $(SRCDIR)/*.c)
HEADER := $(wildcard $(SRCDIR)/*.h)

NAME = libft.a

FLAGS = -Werror -Wextra -Wall

OBJ := $(SRC:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

%.o: %.c $(HEADER)
		$(CC) $(FLAGS) -c $< -o $@

$(NAME): ${OBJ} ${HEADER}
	ar -rcs $(NAME) ${OBJ}

all: ${NAME}

clean:
	rm -rf *.o

fclean: clean
	rm -rf ${NAME}

re: fclean all
	

.PHONY: all clean fclean re


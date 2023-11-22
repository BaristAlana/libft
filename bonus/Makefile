SRC = $(addprefix ft_, $(addsuffix .c, isalpha \
		isdigit \
		isalnum \
		isascii \
		isprint \
		atoi \
		bzero \
		calloc \
		itoa \
		memchr \
		memcmp \
		memcpy \
		memmove \
		memrchr \
		memset \
		putchar_fd \
		putendl_fd \
		putnbr_fd \
		putstr_fd \
		split \
		strchr \
		strdup \
		striteri \
		strjoin \
		strlcat \
		strlcpy \
		strlen \
		strmapi \
		strncmp \
		strnstr \
		strrchr \
		strtrim \
		substr \
		tolower \
		toupper))

OBJS := $(SRC:%.c=%.o)

NAME = libft.a

CC = gcc

CCFLAGS = -Wall -Wextra -Werror

ARNAME = ar rcs $(NAME)

all: $(NAME)

$(NAME): $(OBJS)
	$(ARNAME) $(OBJS)

%.o: %.c
	$(CC) -I. $(CCFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

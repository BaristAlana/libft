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

SRC_BONUS = $(addprefix ft_, $(addsuffix _bonus.c, \
		lstnew \
		lstadd_front \
		lstsize))

OBJS := $(SRC:%.c=%.o)

OBJS_BONUS := $(SRC_BONUS:%.c=%.o)

NAME = libft.a

CC = gcc

CCFLAGS = -Wall -Wextra -Werror

ARNAME = ar crs $(NAME)

all: $(NAME)

$(NAME): $(OBJS)
	$(ARNAME) $(OBJS)

%.o: %.c
	$(CC) -I. $(CCFLAGS) -o $@ -c $<

bonus: all $(OBJS_BONUS)
	$(ARNAME) $(OBJS_BONUS)

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re

NAME = libft.a

CC = cc

CCFLAGS = -Wall -Wextra -Werror

ARNAME = ar crs $(NAME)

INCLUDES = -I.

RM = rm -f

SRC = $(addprefix ft_, $(addsuffix .c, \
		isalpha isdigit isalnum \
		isascii isprint atoi \
		bzero calloc itoa \
		memchr memcmp memcpy \
		memmove memset \
		putchar_fd putendl_fd putnbr_fd \
		putstr_fd split strchr \
		strdup striteri strjoin \
		strlcat strlcpy strlen \
		strmapi strncmp strnstr \
		strrchr strtrim substr \
		tolower toupper))

OBJS := $(SRC:%.c=%.o)

SRC_BONUS = $(addprefix ft_, $(addsuffix .c, \
		lstnew lstadd_front lstsize \
		lstlast lstadd_back lstdelone \
		lstclear lstiter lstmap))

OBJS_BONUS := $(SRC_BONUS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(ARNAME) $(OBJS)
	@echo "$(NAME) created"

%.o: %.c
	@$(CC) $(INCLUDES) $(CCFLAGS) -o $@ -c $<
	@echo "$@ successfully compiled"

bonus: $(OBJS_BONUS) $(NAME)
	@$(ARNAME) $(OBJS_BONUS)
	@echo "Bonus OBJS added to $(NAME)"

clean:
	@$(RM) $(OBJS) $(OBJS_BONUS)
	@echo "OBJS successfully deleted"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(NAME) successfully deleted"

re: fclean all

.PHONY: all bonus clean fclean re

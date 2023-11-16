CFILES = ft_atoi.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_memmove.c \
	ft_strlen.c \
	ft_bzero.c \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_memcpy.c  \
	ft_memset.c \
	ft_memmove.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strncmp.c \
	ft_strchr.c \
	ft_strrchr.c

OFILES = $(CFILES:.c=.o)

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

%.o: %.c
	@cc $(CFLAG) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re

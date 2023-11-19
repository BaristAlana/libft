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
	ft_strrchr.c \
	ft_memchr.c \
	ft_memrchr.c \
	ft_strdup.c \
	ft_strnstr.c \
	ft_memcmp.c \
	ft_calloc.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c

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

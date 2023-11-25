# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aherbin <aherbin@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/25 14:15:08 by aherbin           #+#    #+#              #
#    Updated: 2023/11/25 14:16:58 by aherbin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #                                                                             #
#                                 variables                                    #
# **************************************************************************** #

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

CYAN = \033[1;36m
GREEN = \033[1;32m
RED = \033[1;31m
BLUE = \033[0;34m

# **************************************************************************** #                                                                             #
#                                    RULES                                     #
# **************************************************************************** #

all: $(NAME)

$(NAME): $(OBJS)
	@$(ARNAME) $(OBJS)
	@echo "$(CYAN)$(NAME) $(BLUE)created"

%.o: %.c
	@$(CC) $(INCLUDES) $(CCFLAGS) -o $@ -c $<
	@echo "$(GREEN)$@ $(BLUE)successfully compiled"

bonus: $(OBJS_BONUS) $(NAME)
	@$(ARNAME) $(OBJS_BONUS)
	@echo "$(CYAN)Bonus OBJS $(BLUE)added to $(NAME)"

clean:
	@$(RM) $(OBJS) $(OBJS_BONUS)
	@echo "$(RED)OBJS $(BLUE)successfully deleted"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED)$(NAME) $(BLUE)successfully deleted"

re: fclean all

.PHONY: all bonus clean fclean re

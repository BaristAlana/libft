# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aherbin <aherbin@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/25 14:15:08 by aherbin           #+#    #+#              #
#    Updated: 2024/08/29 12:19:53 by aherbin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                                 variables                                    #
# **************************************************************************** #

NAME = libft.a

CC = cc

CCFLAGS = -Wall -Wextra -Werror

ARNAME = ar crs $(NAME)

INCLUDES = -I include

RM = rm -f

MKDIR_P = mkdir -p

CLR_RMV		:= \033[0m
RED			:= \033[1;31m
GREEN		:= \033[1;32m
YELLOW		:= \033[1;33m
BLUE		:= \033[0;34m
CYAN 		:= \033[1;36m

#          LIBFT          #

SRC_DIR = src/

OBJS_DIR = objs/

LIBFT_FILES = isalpha isdigit isalnum \
		isascii isprint islower isupper \
		atoi atol itoa \
		bzero calloc \
		memchr memcmp memcpy \
		memmove memset \
		putchar_fd putendl_fd putnbr_fd \
		putstr_fd split strchr \
		strdup striteri strjoin \
		strlcat strlcpy strlen \
		strmapi strncmp strnstr \
		strrchr strtrim substr \
		tolower toupper\
		lstnew lstadd_front lstsize \
		lstlast lstadd_back lstdelone \
		lstclear lstiter lstmap \

SRC = $(addprefix $(SRC_DIR)ft_, $(addsuffix .c, $(LIBFT_FILES)))

OBJS := $(addprefix $(OBJS_DIR)ft_, $(addsuffix .o, $(LIBFT_FILES)))

#         PRINTF          #

PRINTF_SRC_DIR = $(SRC_DIR)printf

PRINTF_OBJS_DIR = $(OBJS_DIR)printf/

PRINTF_FILES = printf printf_csph printf_dul

PRINTF_SRC = $(addprefix $(PRINTF_SRC_DIR)ft_, $(addsuffix .c, $(PRINTF_FILES)))

PRINTF_OBJS := $(addprefix $(PRINTF_OBJS_DIR)ft_, $(addsuffix .o, $(PRINTF_FILES)))

#           GNL           #

GNL_SRC_DIR = $(SRC_DIR)gnl

GNL_OBJS_DIR = $(OBJS_DIR)gnl/

GNL_FILES = get_next_line

GNL_SRC = $(addprefix $(GNL_SRC_DIR), $(addsuffix .c, $(GNL_FILES)))

GNL_OBJS := $(addprefix $(GNL_OBJS_DIR), $(addsuffix .o, $(GNL_FILES)))

# **************************************************************************** #
#                                 LIBFT RULES                                  #
# **************************************************************************** #

all: libft_std printf gnl

libft_std: $(NAME)

$(NAME): directories $(OBJS)
	@$(ARNAME) $(OBJS)
	@echo "$(CYAN)$(NAME) $(BLUE)created"

$(OBJS_DIR)%.o: $(SRC_DIR)%.c
	@$(CC) $(INCLUDES) $(CCFLAGS) -o $@ -c $<
	@echo "$(BLUE)Compiling $(GREEN)$@ $(BLUE)..."

$(OBJS_DIR):
	@$(MKDIR_P) $(OBJS_DIR)

# **************************************************************************** #
#                                PRINTF RULES                                  #
# **************************************************************************** #

printf: $(NAME) $(PRINTF_OBJS)
	@$(ARNAME) $(PRINTF_OBJS)
	@echo "$(CYAN)Printf $(BLUE) added to $(CYAN) $(NAME)"

$(PRINTF_OBJS_DIR): $(OBJS_DIR)
	@$(MKDIR_P) $(PRINTF_OBJS_DIR)

$(PRINTF_OBJS_DIR)%.o: $(PRINTF_SRC_DIR)%.c
	@$(CC) $(INCLUDES) $(CCFLAGS) -o $@ -c $<
	@echo "$(BLUE)Compiling $(GREEN)$@ $(BLUE)..."

# **************************************************************************** #
#                                  GNL RULES                                   #
# **************************************************************************** #

gnl: $(NAME) $(GNL_OBJS)
	@$(ARNAME) $(GNL_OBJS)
	@echo "$(CYAN)Get_Next_Line $(BLUE) added to $(CYAN) $(NAME)"

$(GNL_OBJS_DIR): $(OBJS_DIR)
	@$(MKDIR_P) $(GNL_OBJS_DIR)

$(GNL_OBJS_DIR)%.o: $(GNL_SRC_DIR)%.c
	@$(CC) $(INCLUDES) $(CCFLAGS) -o $@ -c $<
	@echo "$(BLUE)Compiling $(GREEN)$@ $(BLUE)..."

# **************************************************************************** #
#                                    RULES                                     #
# **************************************************************************** #

directories: $(OBJS_DIR) $(GNL_OBJS_DIR) $(PRINTF_OBJS_DIR)

clean:
	@$(RM) $(OBJS) $(OBJS_PRINTF) $(OBJS_GNL)
	@rm -rf $(OBJS_DIR)
	@echo "$(CYAN)$(NAME) $(RED)OBJS $(BLUE)successfully deleted"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(CYAN)$(NAME) $(BLUE)successfully deleted"

re: fclean all

.PHONY: all printf gnl libft_std directories clean fclean re

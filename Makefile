# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chenlee <chenlee@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/29 21:09:51 by chenlee           #+#    #+#              #
#    Updated: 2022/04/30 16:00:50 by chenlee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_memset.c			\
		ft_bzero.c			\
		ft_memcpy.c			\
		ft_memmove.c 		\
		ft_memchr.c			\
		ft_memcmp.c			\
		ft_strlen.c			\
		ft_isalpha.c 		\
		ft_isdigit.c		\
		ft_isalnum.c		\
		ft_isascii.c		\
		ft_isprint.c		\
		ft_toupper.c		\
		ft_tolower.c		\
		ft_strchr.c			\
		ft_strrchr.c		\
		ft_strncmp.c		\
		ft_strlcpy.c		\
		ft_strlcat.c		\
		ft_strnstr.c		\
		ft_atoi.c			\
		ft_calloc.c			\
		ft_strdup.c			\
		ft_substr.c			\
		ft_strjoin.c 		\
		ft_strtrim.c		\
		ft_itoa.c			\
		ft_striteri.c		\
		ft_strmapi.c		\
		ft_putchar_fd.c		\
		ft_putstr_fd.c		\
		ft_putendl_fd.c		\
		ft_putnbr_fd.c		\
		ft_split.c

SRCSB =	ft_lstnew.c			\
		ft_lstadd_front.c	\
		ft_lstsize.c		\
		ft_lstlast.c		\
		ft_lstadd_back.c	\
		ft_lstclear.c		\
		ft_lstdelone.c		\
		ft_lstiter.c		\
		ft_lstmap.c			\
		$(SRCS)

NAME = libft.a

OBJS_DIR = objs/
OBJS = $(SRCS:.c=.o)
OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))

OBJSB = $(SRCSB:.c=.o)
OBJECTS_BONUS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJSB))

CC = gcc

CC_FLAGS = -Wall -Wextra -Werror

$(OBJS_DIR)%.o : %.c libft.h
	@mkdir -p $(OBJS_DIR)
	@echo "Compiling: $<"
	@gcc $(CC_FLAGS) -c $< -o $@

$(NAME): $(OBJECTS_PREFIXED)
	@ar r $(NAME) $(OBJECTS_PREFIXED)
	@echo "Libft Done !"

all: $(NAME)

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(OBJECTS_BONUS_PREFIXED)
	@ar r $(NAME) $(OBJECTS_BONUS_PREFIXED)
	@echo "Libft Bonus Done !"

# so:
# 	$(CC) $(CFLAGS) $(SRC)
# 	gcc -shared -o libft.so $(OBJ)

# SRCS			=	ft_isalnum.c ft_isprint.c ft_memcmp.c  ft_putchar_fd.c ft_split.c \
# 					ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
# 					ft_itoa.c ft_memcpy.c  ft_putendl_fd.c ft_strchr.c  ft_strlcpy.c \
# 					ft_strnstr.c ft_tolower.c ft_bzero.c   ft_isascii.c \
# 					ft_memmove.c ft_putnbr_fd.c  ft_strdup.c  ft_strlen.c  ft_strrchr.c \
# 					ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c  ft_memset.c  \
# 					ft_putstr_fd.c  ft_strjoin.c ft_strmapi.c ft_strtrim.c
# OBJS			= $(SRCS:.c=.o)

# BONUS			=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
# 					ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
# 					ft_lstmap.c ft_lstnew.c ft_lstsize.c
# BONUS_OBJS		= $(BONUS:.c=.o)

# CC				= gcc
# RM				= rm -f
# CFLAGS			= -Wall -Wextra -Werror -I.

# NAME			= libft.a

# all:			$(NAME)

# $(NAME):		$(OBJS)
# 				ar rcs $(NAME) $(OBJS)

# clean:
# 				$(RM) $(OBJS) $(BONUS_OBJS)

# fclean:			clean
# 				$(RM) $(NAME)

# re:				fclean $(NAME)

# bonus:			$(OBJS) $(BONUS_OBJS)
# 				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

# .PHONY:			all clean fclean re bonus

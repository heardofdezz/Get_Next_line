# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maloua-h <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/26 15:08:54 by maloua-h          #+#    #+#              #
#    Updated: 2019/03/15 15:37:42 by maloua-h         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = 	ft_atoi.c \
		ft_strcmp.c \
		ft_strncpy.c \
		ft_isalnum.c \
		ft_strncmp.c \
		ft_strcpy.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_strdup.c \
		ft_isascii.c \
		ft_strlen.c \
		ft_tolower.c \
		ft_isprint.c \
		ft_strncat.c \
		ft_strcat.c \
		ft_toupper.c \
		ft_strnstr.c \
		ft_strstr.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_memset.c \
		ft_memcmp.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memchr.c \
		ft_memmove.c \
		ft_memalloc.c \
		ft_memdel.c \
		ft_strnew.c \
		ft_strdel.c \
		ft_strclr.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_strequ.c \
		ft_strnequ.c \
		ft_strsub.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_strsplit.c \
		ft_itoa.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putendl.c \
		ft_putnbr.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_lstadd.c \
		ft_lstdel.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_lstnew.c \
		ft_strsplit.c \

OBJ = $(SRCS:.c=.o)


FLAGS = -Wall -Wextra -Werror 

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
%.o: %.c
	gcc $(FLAGS) -c -o $@ $<

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(NAME) $(OBJ)

re: fclean clean all

.PHONY: clean fclean re all

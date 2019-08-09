# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emdiaz <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/10 22:31:35 by emdiaz            #+#    #+#              #
#    Updated: 2019/03/10 23:36:31 by emdiaz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

FLAGS = -Wall -Wextra -Werror -I .

NAME = libft.a

SOURCES = ft_toupper.c\
		  ft_tolower.c\
		  ft_isprint.c\
		  ft_isascii.c\
		  ft_isdigit.c\
		  ft_isalpha.c\
		  ft_isalnum.c\
		  ft_strlen.c\
		  ft_strnlen.c\
		  ft_atoi.c\
		  ft_strrchr.c\
		  ft_strchr.c\
		  ft_strnstr.c\
		  ft_strcpy.c\
		  ft_strncpy.c\
		  ft_strdel.c\
		  ft_strcmp.c\
		  ft_strncmp.c\
		  ft_strstr.c\
		  ft_strcat.c\
		  ft_strncat.c\
		  ft_strlcat.c\
		  ft_strdup.c\
		  ft_memcpy.c\
		  ft_memccpy.c\
		  ft_memset.c\
		  ft_bzero.c\
		  ft_memmove.c\
		  ft_memchr.c\
		  ft_memcmp.c\
		  ft_memdel.c\
		  ft_memalloc.c\
		  ft_strnew.c\
		  ft_strclr.c\
		  ft_striter.c\
		  ft_striteri.c\
		  ft_strmap.c\
		  ft_strmapi.c\
		  ft_strequ.c\
		  ft_strnequ.c\
		  ft_strsub.c\
		  ft_strjoin.c\
		  ft_strtrim.c\
		  ft_strsplit.c\
		  ft_itoa.c\
		  ft_putchar.c\
		  ft_putstr.c\
		  ft_putendl.c\
		  ft_putnbr.c\
		  ft_putchar_fd.c\
		  ft_putstr_fd.c\
		  ft_putendl_fd.c\
		  ft_putnbr_fd.c\
		  ft_count_words.c\
		  ft_find_word.c\
		  ft_strtrim.c\
		  ft_isspace.c\
		  ft_putchar_fd.c\
		  ft_putstr_fd.c\
		  ft_putendl_fd.c\
		  ft_lstnew.c\
		  ft_lstdelone.c\
		  ft_lstdel.c\
		  ft_lstadd.c\
		  ft_lstiter.c\
		  ft_lstmap.c\

OBJECT = $(SOURCES:.c=.o)

$(NAME):
	@$(CC) $(FLAGS) -c $(SOURCES)
	@ar rcs $(NAME) $(OBJECT)

all: $(NAME)

clean:
	@rm -rf $(OBJECT)

fclean: clean
	@rm -fr $(NAME)

re: fclean all

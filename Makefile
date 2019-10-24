# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/10/17 13:50:17 by seruiz       #+#   ##    ##    #+#        #
#    Updated: 2019/10/24 12:10:52 by seruiz      ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = libft.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

LIB =	libft.h

SRC =	ft_atoi.c\
		ft_bzero.c\
		ft_calloc.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_itoa.c\
		ft_memccpy.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memset.c\
		ft_putchar_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_putstr_fd.c\
		ft_split.c\
		ft_strchr.c\
		ft_strdup.c\
		ft_strncmp.c\
		ft_strjoin.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_strlen.c\
		ft_strmapi.c\
		ft_strnstr.c\
		ft_strrchr.c\
		ft_strtrim.c\
		ft_substr.c\
		ft_tolower.c\
		ft_toupper.c

SRCBONUS =	ft_lstadd_back_bonus.c\
			ft_lstadd_front_bonus.c\
			ft_lstclear_bonus.c\
			ft_lstdelone_bonus.c\
			ft_lstiter_bonus.c\
			ft_lstlast_bonus.c\
			ft_lstmap_bonus.c\
			ft_lstnew_bonus.c\
			ft_lstsize_bonus.c

OBJ_BONUS = $(OBJ) $(SRCBONUS:%.c=%.o)

OBJ = $(SRC:%.c=%.o)

all : $(NAME)

re : fclean all

%.o : %.c $(LIB)
	$(CC) -c -o $@ $< $(FLAGS)

$(NAME) : $(OBJ) $(LIB)
	ar rcs $(NAME) $(OBJ) $(LIB)

bonus : $(OBJ_BONUS)
	ar rcs $(NAME) $(OBJ_BONUS) $(LIB)

clean :
	rm -f $(OBJ) $(OBJ_BONUS)

fclean : clean
	rm -f $(NAME)

.PHONY : clean all re fclean bonus

#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gjacot <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/11 17:04:53 by gjacot            #+#    #+#              #
#    Updated: 2016/10/11 17:17:33 by gjacot           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		=	fdf
DIRSRC		=	./src/
DIROBJ		=	./obj/
SRC			=	./fdf.c \
				./ft_event.c \
				./ft_func.c \
				./ft_ligne.c \
				./ft_main.c	\
				./ft_point.c \
				./ft_strsplit_fdf.c \

OBJ			=	$(SRC:.c=.o)
OBJS		=	$(OBJ:%=$(DIROBJ)%)

CFLAGS		=	-Wall -Wextra -Werror -I./

LIBFT		= 	./libft/libft.a

CC			=	/usr/bin/gcc
RM			=	/bin/rm -f
ECHO		=	/bin/echo -e


$(NAME)	:		$(OBJ)
				$(CC) $(CFLAGS) -lmlx -framework OpenGL -framework AppKit $(LIBFT) -o $(NAME) $(OBJS)
				@$(ECHO) '> Compiled'

clean	:
				@(cd $(DIROBJ) && $(RM) $(OBJ))
ifdef SUB_MAKE
				@(cd $(SUB_MAKE) && $(MAKE) clean)
endif
				@$(ECHO) '> Directory cleaned'

all		:		$(NAME)

fclean	:		clean
ifdef SUB_MAKE
				@(cd $(SUB_MAKE) && $(MAKE) fclean)
endif
				-@$(RM) $(NAME)
				@$(ECHO) '> Remove executable'

re		:		fclean all

.PHONY	:		all clean re

%.o		:		$(DIRSRC)/%.c
				$(CC) $(INCLUDE) $(CFLAGS) -o $(DIROBJ)/$@ -c $<

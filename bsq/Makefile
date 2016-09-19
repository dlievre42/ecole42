# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlievre <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/12 15:43:15 by dlievre           #+#    #+#              #
#    Updated: 2016/09/19 19:27:43 by dlievre          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

VERSION = Makefile version 1.0

NAME = bsq
SRC = bsq.c
GCC = gcc
FLAGS = -Wall -Wextra -Werror
HEADER = -Iinclude
LIB = libft.a
GCC_LIB = -L. $(LIB)

all: 
	@echo 'Compilation options : $(FLAGS) $(HEADER)'
	$(GCC) $(FLAGS) -o $(NAME) $(SRC) $(HEADER) $(GCC_LIB)

clean:
	@echo 'suppression des fichiers $(OBJ) '
	rm -rf $(OBJ)

fclean : clean 
	rm -f $(NAME)
	# supprime la lib
	@echo 'suppression du fichier $(LIB) '
	rm -rf $(LIB)

re: fcleani


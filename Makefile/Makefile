# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlievre <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/12 15:43:15 by dlievre           #+#    #+#              #
#    Updated: 2016/09/16 16:48:20 by dlievre          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

VERSION = Makefile version 1.2.c
# initialisation des exo du jour
INIT_DEST = ex00
INIT_FOLDER = include srcs
INIT_FOLDER_LIB = /nfs/2016/d/dlievre/Desktop/travail/fonctions/

# creation de la librairie
LIB = libft.a
LIB_FOLDER = srcs/
LIB_FILES = ft_putchar.c ft_putstr.c ft_putnbr.c ft_strcmp.c ft_strlen.c ft_swap.c
OBJ = $(LIB_FILES:.c=.o)

NAME = a.out
SRC = include/header.c srcs/main.c
GCC = gcc
FLAGS = -Wall -Wextra -Werror
HEADER = -Iinclude:
GCC_LIB = -L. ${LIB}

all: ${NAME}

${NAME}:
	@echo 'Compilation options : ' ${FLAGS} ${HEADER} 
	${GCC} ${FLAGS} -o ${NAME} *.c ${HEADER} ${GCC_LIB}

clean:
	@echo 'suppression des fichiers ${OBJ} '
	rm -rf ${OBJ}

fclean : clean 
	rm -f ${NAME}
	# supprime la lib
	@echo 'suppression du fichier ${LIB} '
	rm -rf ${LIB}

re: fclean create_lib

initraz:
	rm -rf ${INIT_FOLDER}
	make init

init: 
	# comment 
	@echo 'copie de la libft.a dans le dossier courant '
	cp ${INIT_FOLDER_LIB}${LIB} ${LIB}
	@echo 'initialisation des dossiers ' ${INIT_FOLDER} 
	mkdir ${INIT_FOLDER}
	@echo 'copie du header.h contenant les lib standard et les Fn prototypees'
	@echo 'penser a mettre dans le main.c #include "header.h"'
	cp ${INIT_FOLDER_LIB}include/*.h include/
	ls -R

create_lib:
	#	@echo cp ${LIB_FOLDER}${LIB}  ${INIT_DEST} #
	@echo 'Gestion de la librairie doit se faire dans le dossier Desktop/travail/fonctions'
	@echo 'creation de la librairie ${LIB} dans le dossier courant ' 
	@echo 'compilation des ' $(addprefix ${LIB_FOLDER}, ${LIB_FILES})
	gcc -c $(addprefix ${LIB_FOLDER}, ${LIB_FILES})
	ar rc ${LIB} ${OBJ}
	@echo 'indexation de la librairie'
	ranlib ${LIB}
	ls -l
	@echo 'a faire soit supprimer les .o soit les sauvegarder '
	#@echo 'compilation des ' $(addprefix ${LIB_FOLDER}, ${LIB_FILES})
	#gcc -c $(addprefix ${LIB_FOLDER}, ${LIB_FILES})

norm:
	@echo ''
	norminette *

savemf:
	@echo 'save fichier ${VERSION} vers Desktop/travail/MakeFile/'
	cp Makefile /nfs/2016/d/dlievre/Desktop/travail/Makefile/

getmf:
	@echo 'Recuperation de la derniere version de Makefile, actuelle : ${VERSION}'
	cp /nfs/2016/d/dlievre/Desktop/travail/Makefile/Makefile Makefile
	make version

version:
	@echo ${VERSION}

help:
	@echo ''
	@echo ''
	@echo ${VERSION}
	@echo 'make ou make all : compilation des fichiers .c'
	@echo 'make create_lib : creation de la librairie ${LIB} compilation des ${LIB_FILES}.c'
	@echo 'make init [INIT_DEST=${INIT_DEST}] initialisation des dossiers et copie libft.a'
	@echo 'make savemf : save Makefile vers Desktop/travai/Makefile'
	@echo 'make getmf : recupere la derniere version de Makefile'
	@echo 'make version : indique la version du Makefile '
	@echo ' '
	@echo 'https://fr.wikipedia.org/wiki/Make'
	@echo 'http://www.opussoftware.com/tutorial/TutMakefile.htm'

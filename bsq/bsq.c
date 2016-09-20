/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlievre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 17:19:48 by dlievre           #+#    #+#             */
/*   Updated: 2016/09/20 19:55:23 by dlievre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/header.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

#define BUF_SIZE 1024
char	get_firstln(int handle);

int		open_file(char *file)
{
	ft_putstr(file); ft_putchar('\n');
	//	char buf[BUF_SIZE + 1];
	//	tableau de la Table

	int **matrice, j;

	matrice = malloc( 3 * sizeof(int*));
	for( j = 0 ; j < 3 ; j++)
	{
		matrice[j] = calloc (3, sizeof(int));
	}
	for ( j = 0 ; j < 3 ; j++)
		matrice[j][j] = j;


	int x, y;
	x = y = -1;

	while (++x <= 2 )
	{
		y = -1;
		while (++y <=2)
		{
			ft_putnbr(x); ft_putstr(" "); ft_putnbr(y); ft_putstr(" : ");   	ft_putchar('0' + matrice[x][y]);
			ft_putchar('\n');
		}

	}
	int handle;
	int rx;
	int buf[BUF_SIZE + 1];
	char *firstline;

	int i;

	// trouver le no du handle
	handle = open(file, O_RDONLY, S_IREAD);
	if (handle == -1) return(-1);// retour si bad file
	firstline = get_firstln(handle);
	rx = 1;
	while (rx != 0)
	{
		rx = read(handle, buf, BUF_SIZE);
		i=0;
		while (rx > i)
		{
			ft_putchar(buf[i]);
			i++;
		}
	}
	rx = close(handle);
	return (0);
}

char	get_firstln(int handle)
{
	ft_putstr("\nLecture first line\n");
	int rx;
	int car[10];
	int nb[10];// nb de digit du nb de ligne 
	int i;

	i = 0;
	rx = 1;//read(handle, nb[0], 1);// lecture 1er caractere
	while (rx >0)
	{
		rx = read(handle, car, 1);
		ft_putchar(car[i]);
		i++;

//		if (car >=0 && car <=9) nb[i]=car;

		if (car[i] == '\n') break;
	}
	return (car);
}

	int		main(int argc, char *argv[])
	{
		if (argc == 1) ft_putstr("traitement au clavier : "); 
		else
		{
			while (argc > 1) 
			{
				ft_putstr("traitement : "); 
				ft_putstr(argv[argc -1]); 
				ft_putchar('\n');
				if (open_file(argv[argc-1]) == -1 ) ft_putstr("Table non valide\n");
				argc--;
			}
		}
	}

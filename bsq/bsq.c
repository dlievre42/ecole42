/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlievre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 17:19:48 by dlievre           #+#    #+#             */
/*   Updated: 2016/09/21 18:21:06 by dlievre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/header.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

#define BUF_SIZE 1024
int		get_firstln(int handle);

int		open_file(char *file)
{
	ft_putstr(file); ft_putchar('\n');

	int **matrice, j;

	matrice = malloc( 3 * sizeof(int*));
	for(j = 0; j < 3; j++)
	{
		matrice[j] = calloc (3, sizeof(int));
	}
	for (j = 0; j < 3; j++)
		matrice[j][j] = j;
	int x, y;
	x = y = -1;
	while (++x <= 2)
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
	int firstln[10];
//	int test;
	int i;

	handle = open(file, O_RDONLY, S_IREAD);
	if (handle == -1) return(-1);// retour si bad file
	*firstln = get_firstln(handle);
	ft_putstr("\nlecture table\n");
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

int			get_firstln(int handle)
{
	ft_putstr("\nLecture first line\n");
	int rx;
	char nb[1];
	int ln[10];
	int i;

	i = 0;
	while (*nb != '\n' || i == 0)
	{
		rx = read(handle, nb, 1);
		if (*nb != '\n')
		{
			ln[i] = *nb;
			ft_putchar(ln[i]);
			i++;
		}
		else
		{
		ft_putstr("\nfin firstline\n");
		}
	}
return (1);
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
			if (open_file(argv[argc-1]) == -1) ft_putstr("Table non valide\n");
			argc--;
		}
	}
}

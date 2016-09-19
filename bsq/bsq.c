/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlievre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 17:19:48 by dlievre           #+#    #+#             */
/*   Updated: 2016/09/19 20:00:13 by dlievre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/header.h"
#include <unistd.h>
#include <stdio.h>

#define BUF_SIZE 1000

void	open_file(char *file)
{
//	char buf[BUF_SIZE + 1];	
	int handle;
	int rx;
	char buf[BUF_SIZE + 1];
	
// trouver le no du handle et le remplacer
	handle = 0;
	rx = read(handle, buf, BUF_SIZE);
	while (rx > 0)
	{
		ft_putchar(buf[rx]);
		rx--;
	}
}

int		main(int argc, char *argv[])
{
	if (argc == 1) ft_putstr("traitement au clavier : "); 
	else
	{
	while(argc > 1) 
		{
			ft_putstr("traitement : "); 
			ft_putstr(argv[argc -1]); 
			ft_putchar('\n');
			argc--;
			open_file(argv[argc-1]);
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlievre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 17:19:48 by dlievre           #+#    #+#             */
/*   Updated: 2016/09/19 18:17:05 by dlievre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/header.h"
#include <unistd.h>
#include <stdio.h>

#define BUF_SIZE 1000

void	open_file(void)
{
//	char buf[BUF_SIZE + 1];	

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
//	open_file();
		}
	}
}

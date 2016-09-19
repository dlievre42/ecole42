/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlievre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/18 19:52:55 by dlievre           #+#    #+#             */
/*   Updated: 2016/09/19 17:23:07 by dlievre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/header.h"

#define TAILLE_MAX 1000

int main(int argc, char *argv[])
{
	FILE* fichier = NULL;
	char chaine[TAILLE_MAX] = "";

	fichier = fopen("test.txt", "r");
	if (fichier != NULL)
	{
		while (fgets(chaine, TAILLE_MAX, fichier) != NULL) // On lit le fichier tant qu'on ne reçoit pas d'erreur (NULL)
		{
			printf("%s", chaine); // On affiche la chaîne qu'on vient de lire
		}
		fclose(fichier);
	}
	else
	{
	ft_putstr("Fichier inexistant\n");
	}
	return 0;
}

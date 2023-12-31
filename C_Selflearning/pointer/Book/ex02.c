/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnguecho <jnguecho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:30:30 by jnguecho          #+#    #+#             */
/*   Updated: 2023/07/18 15:47:32 by jnguecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*Écrire une fonction qui ne renvoie aucune valeur et qui détermine la valeur maximale et la valeur minimale d’un tableau d’entiers (à un indice) de taille quelconque. Il faudra donc prévoir 4 arguments : le tableau,
	sa dimension, le maximum et le minimum.
Écrire un petit programme d’essai.*/

void	fct(int *tab, int size, int *p_min, int *p_max)
{
	int	i;

	*p_min = *tab;
	*p_max = *tab;
	for (i = 0; i < size; i++)
	{
		if (*(tab + i) < *p_min)
		{
			*p_min = *(tab + i);
		}
		if (*(tab + i) > *p_max)
		{
			*p_max = *(tab + i);
		}
	}
}

int	main(void)
{
	int arr[] = {23, 24, 21, 35, -97, 54, 456, -768};
	int min = 0;
	int max = 0;
	int size = 8;
	printf("\n\n### Before our super cool function ###\n");
	printf("The minimun is : %d\n", min);
	printf("The maximun is : %d\n", max);
	fct(arr, size, &min, &max);
	printf("\n\n### After our super cool function ###\n");
	printf("The minimun is : %d\n", min);
	printf("The maximun is : %d\n", max);
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 12:47:39 by acoulomb          #+#    #+#             */
/*   Updated: 2018/02/28 16:02:32 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *blop;

	i = 0;
	if (!(blop = (int*)malloc(sizeof(int) * (length))))
		blop = 0;
	while (i < length)
	{
		blop[i] = f(tab[i]);
		i++;
	}
	return (blop);
}

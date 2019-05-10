/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:48:17 by acoulomb          #+#    #+#             */
/*   Updated: 2018/02/22 15:05:17 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	if (!(*range = (int *)malloc((sizeof(**range)) * (max - min))))
		return (0);
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (i);
}

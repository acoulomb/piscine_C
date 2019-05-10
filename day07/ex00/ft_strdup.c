/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 16:10:21 by acoulomb          #+#    #+#             */
/*   Updated: 2018/02/22 15:04:00 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#incude <string.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*dup;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	if (!(dup = (char*)malloc(sizeof(*dup) * (i + 1))))
		return (NULL);
	while (j < i)
	{
		dup[j] = src[j];
		j++;
	}
	dup[i] = '\0';
	return (dup);
}

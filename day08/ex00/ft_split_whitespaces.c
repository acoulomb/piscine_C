/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 11:59:28 by acoulomb          #+#    #+#             */
/*   Updated: 2018/02/26 11:59:31 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count_words(char *str)
{
	int	i;
	int words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] != '\0' && str[i] < 33)
			i++;
		if (str[i] >= 33)
		{
			words++;
			while (str[i] >= 33)
				i++;
		}
	}
	return (words);
}

int		ft_position(char *str, int k)
{
	int i;

	i = 0;
	while (str[i])
	{
		while (str[i] != '\0' && str[i] < 33)
			i++;
		if (str[i] >= 33)
		{
			k--;
			if (k == -1)
				return (i);
			while (str[i] >= 33)
				i++;
		}
	}
	return (-2);
}

void	ft_fill(char *str, char **tab, int k)
{
	int i;
	int pos;

	pos = ft_position(str, k);
	i = 0;
	while (str[pos] >= 33)
	{
		i++;
		pos++;
	}
	if (!(tab[k] = (char*)malloc(sizeof(char) * (i + 1))))
		return ;
	tab[k][i] = '\0';
	pos = pos - i;
	i = 0;
	while (str[pos] >= 33)
		tab[k][i++] = str[pos++];
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		k;
	int		max;

	max = ft_count_words(str);
	k = 0;
	if (!(tab = (char**)malloc(sizeof(char*) * (max + 1))))
		return (NULL);
	tab[max] = NULL;
	while (k < max)
	{
		ft_fill(str, tab, k);
		++k;
	}
	return (tab);
}

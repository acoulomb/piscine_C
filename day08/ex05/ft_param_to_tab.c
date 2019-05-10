/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 22:05:35 by acoulomb          #+#    #+#             */
/*   Updated: 2018/02/27 15:07:20 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>
#include <string.h>

char				*ft_strdup(char *src)
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

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par *patate;
	int			i;

	if (!(patate = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1))))
		return (0);
	i = 0;
	while (av[i])
	{
		patate[i].size_param = ft_strlen(av[i]);
		patate[i].str = av[i];
		patate[i].copy = ft_strdup(av[i]);
		patate[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	patate[i].str = 0;
	return (patate);
}

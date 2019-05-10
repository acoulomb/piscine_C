/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dyn_tab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malberte <malberte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 14:53:06 by malberte          #+#    #+#             */
/*   Updated: 2018/02/25 19:25:44 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft.h"
#include "dyn_tab.h"

int		ft_init(t_dyn_tab *dyn_tab, unsigned int size)
{
	unsigned int i;

	dyn_tab->tab = (char*)malloc(sizeof(char) * size);
	if (!dyn_tab->tab)
		return (0);
	dyn_tab->size = size - 1;
	dyn_tab->i = 0;
	i = 0;
	while (i < size)
	{
		dyn_tab->tab[i] = 0;
		i++;
	}
	return (size);
}

void	ft_free(t_dyn_tab *dyn_tab)
{
	free(dyn_tab->tab);
	dyn_tab->i = 0;
	dyn_tab->size = 0;
}

void	ft_add(t_dyn_tab *dyn_tab, char c)
{
	if (dyn_tab != 0 && dyn_tab->tab != 0)
	{
		if (dyn_tab->i == dyn_tab->size)
		{
			ft_extend(dyn_tab, DEFAULT_SIZE);
		}
		dyn_tab->tab[dyn_tab->i] = c;
		dyn_tab->i++;
	}
}

int		ft_extend(t_dyn_tab *dyn_tab, unsigned int nb_bytes)
{
	char			*new_tab;
	unsigned int	new_size;
	unsigned int	i;

	new_size = dyn_tab->size + nb_bytes;
	new_tab = (char*)malloc(sizeof(char) * new_size);
	if (!new_tab)
		return (0);
	i = 0;
	while (i < new_size)
	{
		new_tab[i] = '\0';
		i++;
	}
	ft_strcpy(new_tab, dyn_tab->tab);
	free(dyn_tab->tab);
	dyn_tab->tab = new_tab;
	dyn_tab->size = new_size - 1;
	return (new_size);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 18:59:47 by acoulomb          #+#    #+#             */
/*   Updated: 2018/02/25 22:38:16 by malberte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush0.h"

void	ft_init_char_tab(char *tab, char c1, char c2, char c3)
{
	tab[0] = c1;
	tab[1] = c2;
	tab[2] = c3;
}

void	ft_putline(char *pos, int size, t_dyn_tab *tab)
{
	int	i;

	(void)tab;
	if (size > 0)
	{
		ft_putchar(pos[0]);
		i = 1;
		while (i < size - 1)
		{
			ft_putchar(pos[1]);
			i++;
		}
		if (size > 1)
			ft_putchar(pos[2]);
		ft_putchar('\n');
	}
}

void	ft_saveline(char *pos, int size, t_dyn_tab *tab)
{
	int	i;

	if (size > 0)
	{
		ft_add(tab, pos[0]);
		i = 1;
		while (i < size - 1)
		{
			ft_add(tab, pos[1]);
			i++;
		}
		if (size > 1)
			ft_add(tab, pos[2]);
		ft_add(tab, '\n');
	}
}

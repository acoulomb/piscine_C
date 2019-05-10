/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malberte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 10:02:00 by malberte          #+#    #+#             */
/*   Updated: 2018/02/25 18:54:11 by gribeill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft.h"
#include "../rush0.h"
#include <stdlib.h>

t_dyn_tab	rush_01(int x, int y,
		void (*ft)(char*, int, t_dyn_tab*), t_option opt)
{
	int			i;
	char		pos1[3];
	char		pos2[3];
	char		pos3[3];
	t_dyn_tab	tab;

	ft_init_char_tab(pos1, '/', '*', '\\');
	ft_init_char_tab(pos2, '*', ' ', '*');
	ft_init_char_tab(pos3, '\\', '*', '/');
	if (opt == SAVE)
		ft_init(&tab, x * y + 1);
	if (x > 0 && y > 0)
	{
		ft(pos1, x, &tab);
		if (y > 1)
		{
			i = 2;
			while (i++ < y)
				ft(pos2, x, &tab);
			ft(pos3, x, &tab);
		}
	}
	if (opt == SAVE)
		ft_add(&tab, '\0');
	return (tab);
}

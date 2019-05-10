/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malberte <malberte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 15:44:09 by malberte          #+#    #+#             */
/*   Updated: 2018/02/25 23:24:46 by malberte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "colle2.h"

int		ft_read_first_line(t_dyn_tab *rush0, int *p_nb_lin, int *p_nb_col)
{
	char	c;
	int		end;

	*p_nb_lin = 0;
	*p_nb_col = 0;
	ft_init(rush0, DEFAULT_SIZE);
	if ((end = read(0, &c, 1)) && c != '\n')
	{
		(*p_nb_lin) = 1;
		(*p_nb_col) = 1;
		ft_add(rush0, c);
	}
	if (c == '\n')
		ft_add(rush0, '\n');
	else
	{
		while ((end = read(0, &c, 1)) && c != '\n')
		{
			ft_add(rush0, c);
			(*p_nb_col)++;
		}
		if (c == '\n')
			ft_add(rush0, '\n');
	}
	return (end);
}

int		ft_read_lines(t_dyn_tab *rush0, int *p_nb_lin)
{
	char	c;
	int		end;

	if ((end = read(0, &c, 1)) && c != '\n')
	{
		(*p_nb_lin)++;
		ft_add(rush0, c);
	}
	if (c == '\n')
		ft_add(rush0, '\n');
	else
		while ((end = read(0, &c, 1)))
		{
			ft_add(rush0, c);
			if (c == '\n' && (end = read(0, &c, 1)))
			{
				ft_add(rush0, c);
				(*p_nb_lin)++;
			}
		}
	return (end);
}

void	ft_print_result(int nb_col, int nb_lin, int colle)
{
	ft_putstr("[colle-0");
	ft_putnbr(colle);
	ft_putstr("] [");
	ft_putnbr(nb_col);
	ft_putstr("] [");
	ft_putnbr(nb_lin);
	ft_putchar(']');
}

void	ft_tab_fill(t_dyn_tab *rush, int nb_col, int nb_lin)
{
	rush[0] = rush_00(nb_col, nb_lin, &ft_saveline, SAVE);
	rush[1] = rush_01(nb_col, nb_lin, &ft_saveline, SAVE);
	rush[2] = rush_02(nb_col, nb_lin, &ft_saveline, SAVE);
	rush[3] = rush_03(nb_col, nb_lin, &ft_saveline, SAVE);
	rush[4] = rush_04(nb_col, nb_lin, &ft_saveline, SAVE);
}

void	ft_print_res(t_dyn_tab *rush, t_dyn_tab input, int nb_col, int nb_lin)
{
	int nb_results;
	int i;

	nb_results = 0;
	i = 0;
	while (i < NB_RUSH)
	{
		if (ft_strcmp(rush[i].tab, input.tab) == 0)
		{
			if (nb_results >= 1)
				ft_putstr(" || ");
			ft_print_result(nb_col, nb_lin, i);
			nb_results++;
		}
		i++;
	}
	if (nb_results == 0)
		ft_putstr("aucune");
	ft_putchar('\n');
}

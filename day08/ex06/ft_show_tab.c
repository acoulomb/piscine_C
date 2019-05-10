/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 23:23:26 by acoulomb          #+#    #+#             */
/*   Updated: 2018/02/27 15:16:41 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_par.h"

void	ft_putnbr(int nb)
{
	long int n;

	n = (long int)nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	if (*str != 0)
	{
		while (str[i])
		{
			ft_putchar(str[i]);
			i++;
		}
	}
}

void	ft_print_words_tables(char **tab)
{
	int i;
	int j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			ft_putchar(tab[i][j]);
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	int i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		ft_print_words_tables(par[i].tab);
		i++;
	}
}

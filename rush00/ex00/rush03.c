/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhoareau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 10:01:38 by qhoareau          #+#    #+#             */
/*   Updated: 2018/02/11 14:59:25 by qhoareau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_top(int i, int x)
{
	ft_putchar('A');
	while (i <= x - 1)
	{
		i++;
		if (i > 2)
			ft_putchar('B');
	}
	if (x > 1)
		ft_putchar('C');
	ft_putchar('\n');
}

void	ft_mid(int i, int x)
{
	ft_putchar('B');
	i = 0;
	while (i <= x - 1)
	{
		i++;
		if (i > 2)
			ft_putchar(' ');
	}
	if (x > 1)
		ft_putchar('B');
	ft_putchar('\n');
}

void	ft_bot(int i, int x)
{
	ft_putchar('A');
	i = 0;
	while (i <= x - 1)
	{
		i++;
		if (i > 2)
			ft_putchar('B');
	}
	if (x > 1)
		ft_putchar('C');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int j;
	int i;

	j = 1;
	i = 0;
	while (j <= y)
	{
		if (j == 1)
		{
			if (x > 0)
				ft_top(i, x);
		}
		else if (j > 1 && j < y)
		{
			if (x > 0)
				ft_mid(i, x);
		}
		else if (j == y)
		{
			if (x > 0)
				ft_bot(i, x);
		}
		j++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/08 20:55:39 by acoulomb          #+#    #+#             */
/*   Updated: 2018/02/09 13:36:42 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_display(int a, int b)
{
	ft_putchar(a / 10 + '0');
	ft_putchar(a % 10 + '0');
	ft_putchar(' ');
	ft_putchar(b / 10 + '0');
	ft_putchar(b % 10 + '0');
	if (a < 98 && b <= 99)
	{
		ft_putchar(',');
	}
}

void	ft_print_comb2(void)
{
	int x;
	int y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_display(x, y);
			y++;
		}
		x++;
	}
}

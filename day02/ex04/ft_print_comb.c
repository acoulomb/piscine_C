/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/08 09:47:57 by acoulomb          #+#    #+#             */
/*   Updated: 2018/02/09 12:08:32 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_display(char x, char y, char z)
{
	ft_putchar(x);
	ft_putchar(y);
	ft_putchar(z);
	if (x != '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char i;
	char j;
	char k;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				ft_display(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}

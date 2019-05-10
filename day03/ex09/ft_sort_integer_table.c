/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/12 12:15:03 by acoulomb          #+#    #+#             */
/*   Updated: 2018/02/12 14:42:55 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int temp;

	i = 0;
	while (i < size)
	{
		if (tab[i + 1] < tab[i])
		{
			temp = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = temp;
			i = 0;
		}
		else
			i++;
	}
}

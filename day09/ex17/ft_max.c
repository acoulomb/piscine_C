/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 09:48:30 by acoulomb          #+#    #+#             */
/*   Updated: 2018/02/16 10:37:00 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max(int *tab, int length)
{
	int i;
	int temp;

	i = 0;
	while (i < length)
	{
		while (tab[i + 1] < tab[i])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		i++;
	}
	return (tab[length - 1]);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:29:32 by acoulomb          #+#    #+#             */
/*   Updated: 2018/02/13 12:17:52 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;

	i = nb;
	if (power >= 1)
	{
		while (power > 1)
		{
			nb = i * nb;
			power--;
		}
		return (nb);
	}
	else if (power == 0)
		return (1);
	else
		return (0);
}

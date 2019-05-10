/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 21:08:55 by acoulomb          #+#    #+#             */
/*   Updated: 2018/02/13 12:22:44 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power >= 1)
	{
		power--;
		nb = nb * ft_recursive_power(nb, power);
		return (nb);
	}
	else if (power == 0)
		return (1);
	else
		return (0);
}

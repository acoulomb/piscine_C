/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 14:48:03 by acoulomb          #+#    #+#             */
/*   Updated: 2018/02/13 15:41:30 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 1;
	if (nb <= 1)
		return (0);
	while (nb / i >= 1)
	{
		i++;
		if (nb % i == 0 && nb > i)
			return (0);
	}
	return (nb);
}

int		ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
	{
		nb++;
		ft_is_prime(nb);
	}
	return (nb);
}

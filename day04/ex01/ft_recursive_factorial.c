/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 15:33:12 by acoulomb          #+#    #+#             */
/*   Updated: 2018/02/13 12:13:11 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb > 1 && nb < 13)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else if (nb == 1 || nb == 0)
		return (1);
	else
		return (0);
}

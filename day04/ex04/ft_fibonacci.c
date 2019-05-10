/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 21:26:07 by acoulomb          #+#    #+#             */
/*   Updated: 2018/02/13 12:48:16 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index >= 2)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	return (-1);
}

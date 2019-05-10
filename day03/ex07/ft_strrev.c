/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 22:06:14 by acoulomb          #+#    #+#             */
/*   Updated: 2018/02/12 10:07:25 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		count;
	int		size;
	char	i;

	count = 0;
	size = 0;
	while (str[size] != '\0')
		size++;
	size = size - 1;
	while (count < size)
	{
		i = str[count];
		str[count] = str[size];
		str[size] = i;
		size--;
		count++;
	}
	return (str);
}

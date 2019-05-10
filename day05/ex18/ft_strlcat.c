/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 11:32:55 by acoulomb          #+#    #+#             */
/*   Updated: 2018/02/15 15:12:54 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i])
	{
		if (j < size - 1)
			dest[j] = src[i];
		i++;
		j++;
	}
	dest[j - 1] = '\0';
	return (j);
}

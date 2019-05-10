/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 14:55:22 by acoulomb          #+#    #+#             */
/*   Updated: 2018/02/15 14:32:36 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (str[i] && i <= n)
	{
		dest[i] = src[i];
		i++;
	}
	while (dest[i])
		dest[i] = '\0';
	return (dest);
}

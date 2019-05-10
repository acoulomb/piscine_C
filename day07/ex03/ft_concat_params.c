/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 10:42:15 by acoulomb          #+#    #+#             */
/*   Updated: 2018/02/26 11:55:50 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\n';
	dest[i + j + 1] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	char	*str;
	int		size;

	(void)argc;
	i = 1;
	size = 0;
	while (argv[i])
	{
		size = size + ft_strlen(argv[i]);
		i++;
	}
	if (!(str = (char*)malloc(sizeof(char) * (size + i + 1))))
		return (0);
	i = 1;
	j = 0;
	while (argv[i])
	{
		str = ft_strcat(str, argv[i]);
		i++;
	}
	str[size + i - 2] = '\0';
	return (str);
}

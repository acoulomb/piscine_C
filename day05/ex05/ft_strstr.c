/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 16:37:35 by acoulomb          #+#    #+#             */
/*   Updated: 2018/02/15 14:41:25 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (to_find[j])
	{
		while (to_find[j] != str[i])
			i++;
		while (to_find[j] == str[i])
		{
			j++;
			i++;
			if (to_find[j] == '\0')
				return (&str[i - j]);
			if (to_find[j] != str[i] && to_find[j])
			{
				j = 0;
				i--;
			}
		}
	}
	return (NULL);
}

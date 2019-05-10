/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 15:36:31 by acoulomb          #+#    #+#             */
/*   Updated: 2018/02/16 15:42:28 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_compact(char **tab, int length)
{
	int		index;
	int		new_size;
	char	*old_tab;
	char	*new_tab[length];

	index = 0;
	new_size = 0;
	while (index < length)
	{
		old_tab = tab;
		if (*old_tab != '\0')
		{
			new_tab[new_size] = *old_tab;
			new_size++;
		}
		index++;
	}
	tab++;
	return (new_size);
}

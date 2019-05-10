/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 13:39:04 by acoulomb          #+#    #+#             */
/*   Updated: 2018/02/16 13:54:36 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void        ft_putstr(char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int         main(int argc, char **argv)
{
	int     i;

	i = 1;
	while (i < argc)
	{
		if (*argv[i] == "president" || argv[i] == "attack" || argv[i] == "bauer")
			ft_putstr("Alert!!!\n");
	}
	i++;
	return (0);
}


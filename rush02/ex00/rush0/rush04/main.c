/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 18:20:55 by acoulomb          #+#    #+#             */
/*   Updated: 2018/02/24 23:19:50 by malberte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft.h"
#include "../rush0.h"

int		main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	rush_04(ft_atoi(argv[1]), ft_atoi(argv[2]), &ft_putline, PRINT);
	return (0);
}

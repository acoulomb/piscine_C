/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malberte <malberte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 09:56:12 by malberte          #+#    #+#             */
/*   Updated: 2018/02/25 23:22:46 by malberte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft.h"
#include "colle2.h"

int		main(void)
{
	int			nb_lines;
	int			nb_columns;
	t_dyn_tab	input;
	t_dyn_tab	rush[NB_RUSH];
	int			i;

	nb_lines = 0;
	nb_columns = 0;
	if (ft_read_first_line(&input, &nb_lines, &nb_columns))
		ft_read_lines(&input, &nb_lines);
	ft_add(&input, '\0');
	ft_tab_fill(rush, nb_columns, nb_lines);
	ft_print_res(rush, input, nb_columns, nb_lines);
	i = 0;
	ft_free(&input);
	while (i < NB_RUSH)
	{
		ft_free(&rush[i]);
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle2.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malberte <malberte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 15:44:29 by malberte          #+#    #+#             */
/*   Updated: 2018/02/25 23:19:20 by malberte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLLE2_H
# define COLLE2_H

# include <stdlib.h>
# include "dyn_tab.h"
# include "rush0/rush0.h"

int		ft_read_first_line(t_dyn_tab *rush0, int *p_nb_lin, int *p_nb_col);
int		ft_read_lines(t_dyn_tab *rush0, int *p_nb_lin);
void	ft_print_result(int nb_col, int nb_lin, int colle);
void	ft_print_res(t_dyn_tab *rush, t_dyn_tab input, int nb_col, int nb_lin);
void	ft_tab_fill(t_dyn_tab *rush, int nb_col, int nb_lin);

#endif

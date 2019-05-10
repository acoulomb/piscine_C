/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 19:01:24 by acoulomb          #+#    #+#             */
/*   Updated: 2018/02/25 18:54:41 by gribeill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH0_H
# define RUSH0_H

# include "../ft.h"
# include "../dyn_tab.h"

# define NB_RUSH 5

typedef enum
{
	PRINT,
	SAVE
}	t_option;

void		ft_init_char_tab(char *tab, char c1, char c2, char c3);
void		ft_putline(char *pos, int size, t_dyn_tab *tab);
void		ft_saveline(char *pos, int size, t_dyn_tab *tab);
t_dyn_tab	rush_00(int x, int y,
		void (*ft)(char*, int, t_dyn_tab*), t_option opt);
t_dyn_tab	rush_01(int x, int y,
		void (*ft)(char*, int, t_dyn_tab*), t_option opt);
t_dyn_tab	rush_02(int x, int y,
		void (*ft)(char*, int, t_dyn_tab*), t_option opt);
t_dyn_tab	rush_03(int x, int y,
		void (*ft)(char*, int, t_dyn_tab*), t_option opt);
t_dyn_tab	rush_04(int x, int y,
		void (*ft)(char*, int, t_dyn_tab*), t_option opt);

#endif

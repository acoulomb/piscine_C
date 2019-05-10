/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dyn_tab.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malberte <malberte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 14:53:26 by malberte          #+#    #+#             */
/*   Updated: 2018/02/25 19:27:08 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DYN_TAB_H
# define DYN_TAB_H

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

# define DEFAULT_SIZE 512

typedef struct		s_dyn_tab
{
	char			*tab;
	unsigned int	size;
	unsigned int	i;
}					t_dyn_tab;

int					ft_init(t_dyn_tab *dyn_tab, unsigned int size);
void				ft_free(t_dyn_tab *dyn_tab);
void				ft_add(t_dyn_tab *dyn_tab, char c);
int					ft_extend(t_dyn_tab *dyn_tab, unsigned int nb_bytes);

#endif

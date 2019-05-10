/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 21:45:38 by acoulomb          #+#    #+#             */
/*   Updated: 2018/02/18 21:11:57 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (argv[i])
	{
		ft_putchar(argv[i][j]);
		j++;
		if (argv[i][j] == '\0')
		{
			ft_putchar('\n');
			i++;
			j = 0;
		}
	}
	return (argc);
}

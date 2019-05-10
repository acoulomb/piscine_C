/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 22:01:59 by acoulomb          #+#    #+#             */
/*   Updated: 2018/02/19 14:15:45 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (argv[argc - 1][j] && (argc - 1) > 0)
	{
		ft_putchar(argv[argc - 1][j]);
		j++;
		if (argv[argc - 1][j] == '\0')
		{
			ft_putchar('\n');
			argc--;
			j = 0;
		}
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 20:59:30 by acoulomb          #+#    #+#             */
/*   Updated: 2018/02/19 14:06:13 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int	i;

	i = 0;
	while (argv[0][i] != 0)
	{
		ft_putchar(argv[0][i]);
		i++;
	}
	ft_putchar('\n');
	return (argc);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 22:30:24 by acoulomb          #+#    #+#             */
/*   Updated: 2018/02/19 15:05:15 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	if (*str != 0)
	{
		while (str[i])
		{
			ft_putchar(str[i]);
			i++;
		}
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int		main(int argc, char **argv)
{
	int		i;
	char	*tmp;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			tmp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = tmp;
			i = 0;
		}
		i++;
	}
	i = 1;
	while (argc - 1 > 0)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		argc--;
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 17:59:39 by acoulomb          #+#    #+#             */
/*   Updated: 2018/02/16 14:46:33 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	if (hour == 24 || hour == 0)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 A.M. AND 1.00 A.M.\n");
	if (hour == 23)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 P.M. AND 12.00 A.M.\n");
	if (hour == 11)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 A.M. AND 12.00 P.M.\n");
	if (hour == 12)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 P.M. AND 1.00 P.M.\n");
	if (1 <= hour && hour <= 10)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("%d.00 A.M. AND %d.00 A.M.\n", hour, hour + 1);
	}
	if (13 <= hour && hour <= 22)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("%d.00 P.M. AND %d.00 P.M.\n", hour % 12, (hour + 1) % 12);
	}
}

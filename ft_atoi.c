/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 01:00:54 by aheddak           #+#    #+#             */
/*   Updated: 2022/06/11 06:41:29 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_error(void)
{
	write (2, "Error\n", 6);
	exit(1);
}

int	ft_atoi_handle(char *av)
{
	int		c;
	long	res;
	int		cmp;

	c = 0;
	res = 0;
	cmp = 1;
	while ((av[c] >= '\t' && av[c] <= '\r') || av[c] == ' ')
		c++;
	cmp = -1 * (av[c] == '-') + 1 * (av[c] != '-');
	c += ((av[c] == '-' || av[c] == '+') && av[c + 1]);
	while (av[c] >= '0' && av[c] <= '9')
	{
		res = (av[c] - '0') + (res * 10);
		c++;
	}
	res = res * cmp;
	if (av[c] || (res < -2147483648 || res > 2147483647))
		return (ft_error());
	return (res);
}

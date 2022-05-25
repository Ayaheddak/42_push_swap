/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 01:00:54 by aheddak           #+#    #+#             */
/*   Updated: 2022/05/25 03:35:22 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_digits(char *av, int i)
{
	while (av[i])
	{
		if (av[i] >= 48 && av[i] < 58)
			i++;
		else
			return (1);
	}
	return (0);
}

int	ft_error(void)
{
	write (1, "Error\n", 6);
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
	if (av[c] == '-')
	{
		cmp = -1;
		c++;
	}
	if (check_digits(av, c) != 0)
		return (ft_error());
	while (av[c] >= '0' && av[c] <= '9')
	{
		res = (av[c] - '0') + (res * 10);
		c++;
	}
	res = res * cmp;
	if (res < -2147483648 || res > 2147483647)
		return (ft_error());
	return (res);
}

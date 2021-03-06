/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_ten.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 02:28:13 by aheddak           #+#    #+#             */
/*   Updated: 2022/06/11 05:58:04 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_index(t_list *l, int n)
{
	int		index;
	t_node	*tmp;

	index = 0;
	tmp = l->head;
	while (tmp != NULL )
	{
		if (tmp->data == n)
			break ;
		index++;
		tmp = tmp->next;
	}
	return (index);
}

int	get_min(t_list *l)
{
	t_node	*tmp;
	int		min;

	tmp = l->head;
	min = l->head->data;
	while (tmp != NULL)
	{
		if (min > tmp->data)
			min = tmp->data;
		tmp = tmp->next;
	}
	return (min);
}

void	sorting_elements(t_list *a, t_list *b)
{
	int	index_min;
	int	i;

	i = 0;
	index_min = get_index(a, get_min(a));
	if (!is_sorted(a))
	{
		if ((get_lsize(a) / 2) > index_min)
		{
			while (i < index_min + 1)
			{
				(rv_rotate(a) && my_putstr("rra"));
				i++;
			}
		}
		else
		{
			while (i < get_lsize(a) - index_min -1)
			{
				(rotate(a) && my_putstr("ra"));
				i++;
			}
		}
	}
	(push_b(a, b) && my_putstr("pb"));
}

t_list	*ten_elements(t_list *a, t_list *b)
{
	int	j;
	int	i;

	i = get_lsize(a) - 3;
	j = 0;
	while (j < i)
	{
		sorting_elements(a, b);
		j++;
	}
	if (!is_sorted(a))
		three_elements (a);
	while (!empty_list(b))
		(push_a(a, b) && my_putstr("pa"));
	return (a);
}

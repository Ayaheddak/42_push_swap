/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 17:06:09 by aheddak           #+#    #+#             */
/*   Updated: 2022/06/05 17:07:01 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	swap_stack(t_list *s)
{
	t_node	*tmp;
	int		id;

	if (!empty_list(s) && !only_elem(s))
	{
		tmp = s->head;
		while (tmp != NULL)
		{
			if (tmp->next == s->top)
			{
				id = tmp->data;
				tmp->data = s->top->data;
				s->top->data = id;
			}
			tmp = tmp->next;
		}
		return (1);
	}
	return (0);
}

int	swap_2_stacks(t_list *a, t_list *b)
{
	swap_stack(a);
	swap_stack(b);
	return (1);
}

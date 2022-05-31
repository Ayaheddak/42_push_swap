/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:24:47 by aheddak           #+#    #+#             */
/*   Updated: 2022/05/30 00:28:32 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_stack(t_list *s)
{
	t_node	*tmp;
	int		id;

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
}

void	swap_stack_a(t_list *a)
{
	if (!empty_list(a) && !only_elem(a))
	{
		swap_stack (a);
		write (1, "sa\n", 3);
	}
}

void	swap_stack_b(t_list *b)
{
	if (!empty_list(b) && !only_elem(b))
	{
		swap_stack(b);
		write(1, "sb\n", 3);
	}
}

void	swap_2_stacks(t_list *a, t_list *b)
{
	swap_stack_a(a);
	swap_stack_b(b);
	write (1, "ss\n", 3);
}
 
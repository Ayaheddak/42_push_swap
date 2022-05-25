/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:24:47 by aheddak           #+#    #+#             */
/*   Updated: 2022/05/25 04:23:48 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_stack(t_list *s)
{
	t_node		*temp;
	t_node		*t;

	temp = s->head;
	t = s->top;
	while (temp != NULL)
	{
		if (temp->next->next == s->top)
		{
			s->top->next = temp->next;
			temp->next->next = NULL;
			temp->next = s->top;
			t = temp->next->next;
			s->top = t;
			break ;
		}
		temp = temp->next;
	}
}

void	swap_stack_a(t_list *a)
{
	swap_stack (a);
	write (1, "sa\n", 3);
}

void	swap_stack_b(t_list *b)
{
	swap_stack(b);
	write(1, "sb\n", 3);
}

void	swap_2_stacks(t_list *a, t_list *b)
{
	swap_stack_a(a);
	swap_stack_b(b);
	write (1, "ss\n", 3);
}

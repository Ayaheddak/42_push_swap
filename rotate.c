/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:32:52 by aheddak           #+#    #+#             */
/*   Updated: 2022/06/14 23:13:24 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate(t_list *s)
{
	t_node	*tmp;

	tmp = s->head;
	if (empty_list(s) && only_elem(s))
		return (0);
	else
	{
		while (tmp != NULL)
		{
			if (tmp->next == s->top)
			{
				s->top->next = s->head;
				s->head = s->top;
				tmp->next = NULL;
				s->top = tmp;
			}
			tmp = tmp->next;
		}
	}
	return (1);
}

int	rotate_two_stackes(t_list *a, t_list *b)
{
	rotate(a);
	rotate(b);
	return (1);
}

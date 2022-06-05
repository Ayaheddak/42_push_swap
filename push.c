/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:29:46 by aheddak           #+#    #+#             */
/*   Updated: 2022/06/05 16:57:28 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	addlast_p(t_list *s, t_node *n)
{
	if (empty_list(s))
	{
		n->next = s->top;
		s->top = n;
		s->head = s->top;
	}
	else
	{
		s->top->next = n;
		n->next = NULL;
		s->top = n;
	}
}

int	push_a(t_list *a, t_list *b)
{
	if (!empty_list(b))
	{
		addlast_p(a, get_last(b));
		return (1);
	}	
	return (0);
}

int	push_b(t_list *a, t_list *b)
{
	if (!empty_list(a))
	{
		addlast_p(b, get_last(a));
		return (1);
	}
	return (0);
}

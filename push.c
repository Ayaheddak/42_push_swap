/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:29:46 by aheddak           #+#    #+#             */
/*   Updated: 2022/06/11 10:48:41 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*get_last(t_list *l)
{
	t_node	*tmp;
	t_node	*value;

	value = NULL;
	tmp = l->head;
	if (only_elem(l))
	{
		value = l->head;
		l->head = NULL;
		l->top = l->head;
		return (value);
	}
	while (tmp != NULL)
	{
		if (tmp->next == l->top)
		{
			value = l->top;
			tmp->next = NULL;
			l->top = tmp;
			break ;
		}
		tmp = tmp->next;
	}
	return (value);
}

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

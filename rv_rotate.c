/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rv_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 10:35:45 by aheddak           #+#    #+#             */
/*   Updated: 2022/06/01 02:29:54 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*get_first(t_list *l)
{
	t_node	*tmp;
	
	tmp = l->head;
	l->head = l->head->next;
	tmp->next = NULL;
	return (tmp);
}

void	rv_rotate_a(t_list *a)
{
	addlast(a, get_first(a));
	write (1, "rra\n", 4);
}

void	rv_rotate_b(t_list *b)
{
	addlast(b, get_first(b));
	write (1, "rrb\n", 4);
}

void	rv_rotate_stackes(t_list *b, t_list *a)
{
	rv_rotate_a(a);
	rv_rotate_b(b);
	write (1, "rrr\n", 4);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rv_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 10:35:45 by aheddak           #+#    #+#             */
/*   Updated: 2022/05/29 12:46:55 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void    addLast(t_list *s, int value)
// {
//     t_node *tmp;
//     t_node *n;

//     n = addnode(value);
//     tmp = s->head;
//     while(tmp != NULL)
//     {
//       if(tmp->next == s->top)
//     { 
//       s->top->next = n;
//       s->top = n;
//       break;
//     }
//     tmp = tmp->next;
//     }  
// }

int	get_first(t_list *l)
{
	int		id;
	t_node	*tmp;

	if (!empty_list(l))
	{
		tmp = l->head;
		id = l->head->data;
		l->head = l->head->next;
		tmp->next = NULL;
		return (id);
	}
	return (1);
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

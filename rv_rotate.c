/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rv_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 10:35:45 by aheddak           #+#    #+#             */
/*   Updated: 2022/06/05 17:03:17 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rv_rotate(t_list *a)
{
	if (empty_list(a) && only_elem(a))
		return (0);
	else
	{
		a->top->next = a->head;
		a->head = a->head->next;
		a->top = a->top->next;
		a->top->next = NULL;
	}
	return (1);
}

int	rv_rotate_stackes(t_list *b, t_list *a)
{
	rv_rotate(a);
	rv_rotate(b);
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 07:22:59 by aheddak           #+#    #+#             */
/*   Updated: 2022/06/05 17:35:18 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*three_elements(t_list *a)
{
	if (a->top->data > a->head->next->data && a->head->next->data
		< a->head->data && a->top->data < a->head->data)
		(swap_stack(a) && my_putstr("sa"));
	else if (a->top->data > a->head->next->data && a->head->next->data
		> a->head->data && a->top->data > a->head->data)
	{
		(swap_stack(a) && my_putstr("sa"));
		(rv_rotate(a) && my_putstr("rra"));
	}
	else if (a->top->data > a->head->next->data && a->head->next->data
		< a->head->data && a->top->data > a->head->data)
		(rotate(a) && my_putstr("ra"));
	else if (a->top->data < a->head->next->data && a->head->next->data
		> a->head->data && a->top->data < a->head->data)
	{
		(swap_stack(a) && my_putstr("sa"));
		(rotate(a) && my_putstr("ra"));
	}
	else
		(rv_rotate(a) && my_putstr("rra"));
	return (a);
}

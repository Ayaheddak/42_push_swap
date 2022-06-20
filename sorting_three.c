/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 07:22:59 by aheddak           #+#    #+#             */
/*   Updated: 2022/06/11 10:21:39 by aheddak          ###   ########.fr       */
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

int	my_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		write (1, &s[i], 1);
		i++;
	}
	return (write(1, "\n", 1));
}

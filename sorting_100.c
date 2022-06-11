/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_100.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 02:23:18 by aheddak           #+#    #+#             */
/*   Updated: 2022/06/11 10:21:50 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	inc_norm(t_incs *incs, int type)
{
	if (type == 0)
	{
		incs->size_b -= 1;
		incs->index -= 1;
	}
	else if (type == 1)
	{
		incs->index -= 1;
		incs->r -= 1;
	}
	else if (type == 2)
	{
		incs->size_b -= 1;
		incs->r += 1;
	}
	return (1);
}

void	cond_b(t_list *a, t_list *b, t_incs *incs, int *arr)
{
	int	pos;

	pos = get_index(b, arr[incs->index]);
	if (pos <= (incs->size_b / 2))
	{
		while (b->top->data != arr[incs->index])
			(rv_rotate(b) && my_putstr("rrb"));
		(push_a(a, b) && my_putstr("pa") && inc_norm(incs, 0));
	}
	else if (pos > (incs->size_b / 2))
	{
		while (b->top->data != arr[incs->index])
			(rotate(b) && my_putstr("rb"));
		(push_a(a, b) && my_putstr("pa") && inc_norm(incs, 0));
	}
}

void	send_b_to_a(t_list *a, t_list *b, int index, int *arr)
{
	t_incs	incs;

	incs.r = 0;
	incs.size_b = index + 1;
	incs.index = index;
	while (index >= 0)
	{
		if (b->top && b->top->data == arr[incs.index])
			(push_a(a, b) && my_putstr("pa") && inc_norm(&incs, 0));
		else if (incs.r != 0 && a->head && (a->head->data == arr[incs.index]))
			(rv_rotate(a) && my_putstr("rra") && inc_norm(&incs, 1));
		else if ((incs.r != 0 && (a->head->data < b->top->data))
			|| (b->top && incs.r == 0))
			(push_a(a, b) && my_putstr("pa") && rotate(a) && my_putstr("ra")
				&& inc_norm(&incs, 2));
		else
			cond_b(a, b, &incs, arr);
	}
}

void	cond_a(t_args *args, t_list *a, t_list *b, int *arr)
{
	if (a->top->data > arr[args->size - 3])
		(rotate(a) && my_putstr("ra"));
	else if (a->top->data >= arr[args->first]
		&& a->top->data <= arr[args->last])
	{
		(push_b(a, b) && my_putstr("pb"));
		if (b->top->data < arr[(args->size / 2)])
			(rotate(b) && my_putstr("rb"));
		args->size_b++;
	}
	else
		(rotate(a) && my_putstr("ra"));
	if (args->size_b == (args->last - args->first) + 1)
	{
		args->first -= args->key;
		args->last += args->key;
	}
	if ((args->first < 0 || args->last > (args->size - 4)))
	{
		args->first = 0;
		args->last = args->size - 4;
	}
}

void	send_a_to_b(t_list *a, t_list *b, int *arr, int key_nbr )
{
	t_args	args;

	args.size = get_lsize(a);
	args.key = key_nbr;
	args.size_b = 0;
	args.first = (args.size / 2) - args.key;
	args.last = (args.size / 2) + args.key;
	while (1)
	{
		if (args.size_b == args.size - 3)
			break ;
		cond_a(&args, a, b, arr);
	}
	if (!is_sorted(a))
		three_elements(a);
	send_b_to_a(a, b, args.size - 4, arr);
}

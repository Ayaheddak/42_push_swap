/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:32:52 by aheddak           #+#    #+#             */
/*   Updated: 2022/05/25 04:27:08 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_list *a)
{
	addFirst(a);
	write (1, "ra\n", 3);
}

void	rotate_b(t_list *b)
{
	addFirst (b);
	write (1, "rb\n", 3);
}

void	rotate_two_stacks(t_list *a, t_list *b)
{
	rotate_a(a);
	rotate_b(b);
	write (1, "rr\n", 3);
}

void	rv_rotate_a(t_list *a)
{
	addFirst (a);//remove first add end 
	write (1, "rra\n", 4);
}

void	rv_rotate_b(t_list *b)
{
	addFirst(b);
	write (1,"rrb\n",4);
}

void	rv_rotate_two_stackes(t_list *b, t_list *a)
{
	rv_rotate_a(a);
	rv_rotate_b(b);
	write (1, "rrr\n", 4);
}

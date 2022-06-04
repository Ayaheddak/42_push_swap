/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:32:52 by aheddak           #+#    #+#             */
/*   Updated: 2022/06/04 12:19:06 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_list *a)
{
	
	addfirst(a, get_last(a));
	write (1, "ra\n", 3);
}

void	rotate_b(t_list *b)
{
	addfirst(b, get_last(b));
	write (1, "rb\n", 3);
}

void	rotate_two_stackes(t_list *a, t_list *b)
{
	rotate_a(a);
	rotate_b(b);
	write (1, "rr\n", 3);
}


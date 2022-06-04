/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 07:22:59 by aheddak           #+#    #+#             */
/*   Updated: 2022/06/04 14:03:36 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list  *three_elements(t_list *a)
{
    t_node  *top;
    t_node  *middle;
    t_node  *bottom;
    
    top = a->top;
    bottom = a->head;
    middle = a->head->next;
    if(top->data > middle->data && middle->data < bottom->data && top->data < bottom->data)//case 1
        swap_stack_a(a);
    else if (top->data > middle->data && middle->data > bottom->data && top->data > bottom->data)//case 2
    {
        swap_stack_a(a);
        rv_rotate_a(a);
    }
    else if (top->data > middle->data && middle->data < bottom->data && top->data > bottom->data)//
        rotate_a(a);
    else if (top->data < middle->data && middle->data > bottom->data && top->data < bottom->data)//case 4
    {
          swap_stack_a(a);
          rotate_a(a);
           
    }
    else
        rv_rotate_a(a);
    return(a);
}
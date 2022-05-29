/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 12:48:15 by aheddak           #+#    #+#             */
/*   Updated: 2022/05/29 13:35:33 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "push_swap.h"

int get_lsize(t_list *l)
{
  int       len;
  t_node    *tmp;
  
  len = 0;
  tmp = l->head;
  while (tmp != NULL)
  {
      tmp=tmp->next;
      len++;
  }
  return(len);
}
//in case two elem sa;
t_list  *three_elem(t_list *a)
{
    t_node  *top;
    t_node  *middle;
    t_node  *bottom;
    
    top = a->top;
    bottom = a->head;
    middle = a->head->next;
    if(top->data > middle->data && middle->data < bottom->data && top->data > bottom->data)//case 1
        swap_stack_a(a);
    else if (top->data < middle->data && middle->data < bottom->data && top->data < bottom->data)//case 2
    {
        swap_stack_a(a);
        rv_rotate_a(a);
    }
    else if (top->data > middle->data && middle->data < bottom->data && top->data < bottom->data)//
        rotate_a(a);
    else if (top->data < middle->data && middle->data > bottom->data && top->data > bottom->data)//case 4
    {
          swap_stack_a(a);
          rotate_a(a);
           
    }
    else
        rv_rotate_a(a);
    return(a);
}

t_list *sort_stacks(t_list *l)
{
    int lsize;

    lsize = get_lsize(l);
    if (empty_list(l) && only_elem(l) && is_sorted(l))
    {
        if (lsize == 2)
        {
            swap_stack_a(l);
            return(l);
        }
        else if (lsize == 3)
            return(three_elem(l));
    }
}
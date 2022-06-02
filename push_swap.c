/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 12:48:15 by aheddak           #+#    #+#             */
/*   Updated: 2022/06/02 02:27:18 by aheddak          ###   ########.fr       */
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

void    sort_lessten(t_list *a, t_list *b)
{
    int lsize;

    lsize = get_lsize(a);
    if (!is_sorted(a) && !only_elem(a) && !empty_list(a))
    {
        if (lsize == 2)
           swap_stack_a(a);
        else if (lsize == 3)
            three_elements(a);
        else if (lsize > 3 && lsize <= 10)
            ten_elements(a,b);
    } 
}
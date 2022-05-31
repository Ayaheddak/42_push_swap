/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 12:48:15 by aheddak           #+#    #+#             */
/*   Updated: 2022/05/31 10:53:56 by aheddak          ###   ########.fr       */
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
            five(a, b);
    } 
}

int get_min(t_list *l)
{
    t_node *tmp;
    int min;

    tmp = l->head;
    min = l->head->data;
    while (tmp != NULL)
    {
        if(min > tmp->data)
            min = tmp->data;
        tmp = tmp->next;
    }
    return (min);
}


int get_index(t_list *l ,int n)
{
    int index;
    t_node *tmp;

    index = 0;
    tmp = l->head;
    while (tmp != NULL )
    {
        if(tmp->data == n)
            return (index);
        index++;
        tmp = tmp->next;
    }
    //return (index);
}


t_list *five_elements(t_list *a, t_list *b)
{
    int index_min;
    int proximity;
    int i;
    
    index_min = get_index(a,get_min(a));
    proximity = (get_lsize(a) / 2); 
    i = 0;
    if (proximity > index_min)
    {
        while (i < index_min + 1)
        {
             rv_rotate_a(a);
             i++;
        }
    }
   else
    {
        while (i < get_lsize(a) - index_min -1)
        {
            rotate_a(a);
            i++;
        }
    } 
    push_b(a,b);
}

t_list *five(t_list *a, t_list *b)
{
    int j;
    int i;

   i = get_lsize(a) - 3;
    j = 0;
    while (j < i)
    {
        five_elements(a,b);
        j++;
    }
}
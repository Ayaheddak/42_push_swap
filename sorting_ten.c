/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_ten.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 02:28:13 by aheddak           #+#    #+#             */
/*   Updated: 2022/06/03 08:20:52 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get_index(t_list *l ,int n)
{
    int     index;
    t_node  *tmp;

    index = 0;
    tmp = l->head;
    while (tmp != NULL )
    {
        if(tmp->data == n)
            break ;
        index++;
        tmp = tmp->next;
    }
    return (index);
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

void sorting_elements(t_list *a,t_list *b)
{
    int index_min;
    int proximity;
    int i;
    
    index_min = get_index(a,get_min(a));
    proximity = (get_lsize(a) / 2); 
    i = 0;
    if (!is_sorted(a))
    {
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
    }
   push_b(a,b);
}

t_list *ten_elements(t_list *a, t_list *b)
{
    int j;
    int i;

   i = get_lsize(a) - 3;
   j = 0;
    while (j < i)
    {
        sorting_elements(a,b);
        //push_b(a,b);
        j++;
    }
    if (!is_sorted(a))
        three_elements (a);
    while(is_sorted(b))
          push_a(a,b);
   return(a);
}
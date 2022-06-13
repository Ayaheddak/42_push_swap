/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_100.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 02:23:18 by aheddak           #+#    #+#             */
/*   Updated: 2022/06/13 23:51:51 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int rotate_elem(t_list *a, t_list *b, t_incs *incs)
{
	 if (b->top && b->top->data == incs->arr[incs->index])
    {
        push_a(a,b) && my_putstr("pa");
        incs->index--;
    }
    else if (b->top && incs->r==0)
    {
        push_a(a,b) && my_putstr("pa");
        rotate(a) && my_putstr("ra"); 
        incs->r+=1;
    }
    else if (incs->r != 0 && a->head && (a->head->data == incs->arr[incs->index]))
        {
            rv_rotate(a)&& my_putstr("rra");
            incs->index--;
            incs->r-=1;
        }
        else if (incs->r != 0 && (a->head->data < b->top->data))
        {
                push_a(a,b) && my_putstr("pa");
                rotate(a)&& my_putstr("ra");
                incs->r+=1;
        }
        else
            return (0);
        return (1);
}
void  send_b_to_a(t_list *a, t_list *b, t_incs *incs)//eeror
{
    int proximity;
    int i;
    int pos;

    proximity = (get_lsize(b) / 2); 
    i = 0;
    incs->r = 0;
    incs->index = get_lsize(b) - 1;
    while (incs->index  >= 0)
    {
        if (rotate_elem(a, b,incs) == 0)
        {
            pos =get_index(b,incs->arr[incs->index]);
            if (pos <= (get_lsize(b) / 2))
            {
                while ( b->top->data != incs->arr[incs->index])
                    rv_rotate(b)&& my_putstr("rrb");
                push_a(a,b) && my_putstr("pa");
                incs->index--;
             }
            else 
           {
             while (b->top->data != incs->arr[incs->index])
			 	rotate(b) && my_putstr("rb"); 
            push_a(a,b) && my_putstr("pa"); 
                incs->index--;  
          }
        }
       
        }
}
void cond_a(t_list *a, t_list *b, t_incs  *incs, t_args *args)
{
        if (a->top->data > incs->arr[args->size - 3])
            rotate(a)&& my_putstr("ra");
        else if (a->top->data >= incs->arr[args->first] && a->top->data <= incs->arr[args->last])
        {
            push_b(a,b)&& my_putstr("pb");
            if (b->top->data < incs->arr[args->middle])
                rotate(b)&& my_putstr("rb");
            args->size_b++;
		}
        else
            rotate(a)&& !my_putstr("ra");
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
void    send_a_to_b(t_list *a, t_list *b, t_incs *incs, int key_nbr)
{
     t_args  args;
     
     args.size = get_lsize(a);
     args.middle =  args.size/2;
     args.key = key_nbr;
	 args.size_b = 0;
     args.first =  args.middle -  args.key;
     args.last =  args.middle +  args.key;
    while(get_lsize(a) > 3)
        cond_a(a, b, incs, &args);
    if(!is_sorted(a))
         three_elements(a);
   send_b_to_a(a,b,incs);
}

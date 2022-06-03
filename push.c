/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:29:46 by aheddak           #+#    #+#             */
/*   Updated: 2022/06/03 05:46:37 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void    addlast_push(t_list *s, t_node *n)
// {
//   if(empty_list(s))
//   {
//    addfirst(s,n);
//   }
//   else
//   {
//      s->top->next = n;
//      s->top = n;
//   }
// }
void    addlast_p(t_list *s, t_node *n)
{
  if(empty_list(s))
  {
     
 n->next = s->top;
 s->top = n;
 s->head=s->top ;
  }
  else
  {
   addfirst(s,n);
  }
}
void	push_a(t_list *a, t_list *b)
{
	if (!empty_list(b))
	{
		addlast_p(a, get_last(b));
		write(1, "pa\n", 3);
	}
}

void	push_b(t_list *a, t_list *b)
{
	if (!empty_list(a))
	{
		addlast_p(b, get_last(a));
		write(1, "pb\n", 3);
	}
}


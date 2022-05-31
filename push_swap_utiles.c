/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utiles.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:22:44 by aheddak           #+#    #+#             */
/*   Updated: 2022/05/31 04:20:45 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*addnode(int value)
{
	t_node	*newnode;

	newnode = (t_node *)malloc(sizeof(t_node));
	if (!newnode)
		return (NULL);
	newnode->data = value;
	newnode->next = NULL;
	return (newnode);
}

t_list	*creatlist(void)
{
	t_list	*newlist;

	newlist = (t_list *)malloc(sizeof(t_list));
	newlist->head = NULL;
	newlist->top = NULL;
	return (newlist);
}

int	empty_list(t_list *s)
{
	if (s->top == NULL)
		return (1);
	return (0);
}

int	only_elem(t_list *s)
{
	if (s->head == s->top)
		return (1);
	return (0);
}

// int get_last(t_list *l)	//top
// {
// 	t_node	*tmp;
// 	int		value;

// 	tmp = l->head;
// 	while (tmp != NULL)
// 	{
// 		if (tmp->next == l->top)
// 		{
// 			value = l->top->data;
// 			tmp->next = NULL;
// 			l->top = tmp;
// 			return (value);
// 		}
// 		tmp = tmp->next;
// 	}
// 	return (1);
// }
t_node *get_last(t_list *l)
{
    t_node    *tmp;
    t_node    *value;

   tmp = l->head;
   while (tmp != NULL)
    {
       if (tmp->next == l->top)
        {
            value = l->top;
            tmp->next = NULL;
            l->top = tmp;
            return (value);
        }
      tmp = tmp->next;
   }
}
// t_node *get_last(t_list *l)    //top
// {
//     t_node    *tmp;
//     t_node    *value;

//     tmp = l->head;
//     while (tmp != NULL)
//     {
//         if (tmp->next == l->top)
//         {
//             value = l->top;
//             tmp->next = NULL;
//             l->top = tmp;
//             return (value);
//         }
//         tmp = tmp->next;
//     }
//     return (1);
// }

// void	addlast(t_list *s, int value)
// {
// 	t_node	*tmp;
// 	t_node	*n;

// 	n = addnode(value);
// 	tmp = s->head;
// 	// 	if (!stack->top)
// 	// 	stack->top = n;
// 	// n->next = stack->head;
// 	// stack->head = n;
// 	if (!empty_list(s) && only_elem(s))
// 	{
// 		if (!s->top)
// 			s->top = n;
// 		n->next = s->head;
// 		s->head = n;
// 	}
// 	while (tmp != NULL)//rm boucle
// 	{
// 		if (tmp->next == s->top)
// 		{
// 			s->top->next = n;
// 			s->top = n;
// 			break ;
// 		}
// 		tmp = tmp->next;
// 	}
// }
// void    addlast(t_list *s, t_node *n)
// {
//     t_node    *tmp;
    
//     tmp = s->head;
//     // //     if (!stack->top)
//     // //     stack->top = n;
//     // // n->next = stack->head;
//     // // stack->head = n;
//     // if (!empty_list(s) && only_elem(s))
//     // {
//     //     if (!s->top)
//     //         s->top = n;
//     //     n->next = s->head;
//     //     s->head = n;
//     // }
//     while (tmp != NULL)
//     {
//         if (tmp->next == s->top)
//         {
//             s->top->next = n;
//             s->top = n;
//             break ;
//         }
//         tmp = tmp->next;
//     }
// }
void    addlast(t_list *s, t_node *n)
{
  if(empty_list(s))
  {
    n->next = s->head;
    s->head = n;
  }
  else
  {
     s->top->next = n;
     s->top = n;
  }
}

int	is_sorted(t_list *l)
{
    t_node    *tmp;

    tmp = l->head;
    if (empty_list(l))
        return (0);
    while (tmp->next != NULL)
    {
        if (tmp->data < tmp->next->data)
            return(0);
        tmp = tmp->next;
    }
    return (1);
}

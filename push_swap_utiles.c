/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utiles.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:22:44 by aheddak           #+#    #+#             */
/*   Updated: 2022/05/29 13:17:16 by aheddak          ###   ########.fr       */
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

// void	addfirst(t_list *stack, t_node *n)
// {
// 	n->next = stack->head;
// 	stack->head = n;
// }

int	get_last(t_list *l)
{
	t_node	*tmp;
	int		value;

	tmp = l->head;
	while (tmp != NULL)
	{
		if (tmp->next == l->top)
		{
			value = l->top->data;
			tmp->next = NULL;
			l->top = tmp;
			return (value);
		}
		tmp = tmp->next;
	}
	return (1);
}

void	addlast(t_list *s, int value)
{
	t_node	*tmp;
	t_node	*n;

	n = addnode(value);
	tmp = s->head;
	while (tmp != NULL)
	{
		if (tmp->next == s->top)
		{
			s->top->next = n;
			s->top = n;
			break ;
		}
		tmp = tmp->next;
	}
}

int	is_sorted(t_list *l)
{
	t_node	*tmp;

	tmp = tmp->next;
	while (tmp != NULL)
	{
		if (tmp->data < tmp->next->data)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
// int	get_lastelm(t_list *l)
// {
// 	t_node	*tmp;
// 	int		value;

// 	tmp = l->head;
// 	while (tmp != NULL)
// 	{
// 		if (tmp->next == l->top)
// 		{
// 			value = tmp->next->data;
// 			tmp->next = NULL;
// 			return (value);
// 		}
// 		tmp = tmp->next;
// 	}
// }
// void    addLast(t_list *s, int value)
// {
//     t_node *tmp;
//     t_node *n;

//     n = addnode(value);
//     tmp = s->head;
//     while(tmp != NULL)
//     {
//       if(tmp->next == s->top)
//     { 
//       s->top->next = n;
//       s->top = n;
//       break;
//     }
//     tmp = tmp->next;
//     }  
// }
// void    add_elm_last(t_list *s, int value)
// {
//     t_node *tmp;
//     t_node *n;

//     n = addnode(value);
//     tmp = s->head;
//     while(tmp != NULL)
//     {
//       if(tmp->next == s->top)
//     { 
//       s->top->next = n;
//       s->top = n;
//       break;
//     }
//     tmp = tmp->next;
//     }  
// }
// int    get_last(t_list *l)
// {
//     t_node    *tmp;
//     int        value;

//     tmp = l->head;
//     while (tmp != NULL)
//     {
//         if (tmp->next == l->top)
//         {
//             value = l->top->data;
//             tmp->next= NULL;
//             l->top =tmp;
//             return (value);
//         }
//         tmp = tmp->next;
//     }
// }
// int get_first(t_list *l)
// {
//   int id;
//   t_node *tmp;

//   if (!empty_list(l))
//   {
//     tmp=l->head;
//     id = l->head->data;
//     l->head = l->head->next;
//     tmp->next = NULL;
//     return(id);
//   }
// }
// void	addfirst(t_list *l)
// {
// 	t_node	*newnode;

// 	newnode = addnode(get_lastelm(l));
// 	newnode->next = l->head;
// 	l->head = newnode;
// }

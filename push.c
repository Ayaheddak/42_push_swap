/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:29:46 by aheddak           #+#    #+#             */
/*   Updated: 2022/05/29 11:28:36 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_list *a, t_list *b)
{
	if (!empty_list(a))
	{
		addlast(a, get_last(b));
		write(1, "pa\n", 3);
	}
}
// void	push_a(t_list *a, t_list *b)
// {
// 	t_node	*tmp;
// 	t_node	*newnode;
// 	int		value;

// 	//value = get_lastelm (b);
// 	newnode = addnode(value);
// 	tmp = a->head;
// 	while (tmp != NULL)
// 	{
// 		if (tmp->next == NULL)
// 		{
// 			tmp->next = newnode;
// 			newnode->next = NULL;
// 			break ;
// 		}
// 		tmp = tmp->next;
// 	}
// 	write(1, "pa\n", 3);
// }
void	push_b(t_list *a, t_list *b)
{
	if (!empty_list(b))
	{
		addlast(b, get_last(a));
		write(1, "pb\n", 3);
	}
}
// void	push_b(t_list *a, t_list *b)
// {
// 	t_node	*tmp;
// 	t_node	*newnode;
// 	int		value;

// 	//value = 	get_lastelm(a);
// 	newnode = addnode(value);
// 	tmp = b->head;
// 	while (tmp != NULL)
// 	{
// 		if (tmp->next == NULL)
// 		{
// 			tmp->next = newnode;
// 			newnode->next = NULL;
// 			break ;
// 		}
// 		tmp = tmp->next;
// 	}
// 	write(1, "pb\n", 3);
// }

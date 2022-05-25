/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utiles.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:22:44 by aheddak           #+#    #+#             */
/*   Updated: 2022/05/25 04:40:32 by aheddak          ###   ########.fr       */
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
	if (s->head == NULL)
		return (1);
	return (0);
}

int	get_elem(t_list *l)
{
	t_node	*tmp;
	int		value;

	tmp = l->head;
	while (tmp != NULL)
	{
		if (tmp->next == l->top)
		{
			value = tmp->next->data;
			tmp->next = NULL;
			return (value);
		}
		tmp = tmp->next;
	}
}

void	addfirst(t_list *l)
{
	t_node	*newnode;

	newnode = AddNode(get_elem(l));
	newnode->next = l->head;
	l->head = newnode;
}

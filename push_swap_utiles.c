/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utiles.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:22:44 by aheddak           #+#    #+#             */
/*   Updated: 2022/05/27 10:19:16 by aheddak          ###   ########.fr       */
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
void	add_elm_last(t_list *a, int value)
{
	t_node *newnode;
	t_node *tmp;

	newnode = addnode(value);
	if(a->head == NULL)
		a->head = newnode;
	else 
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = newnode;
	}
	
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

int only_elem(t_list *s)
{
	if (s->head == s->top)
		return (1);
	return (0);
}
int	get_lastelm(t_list *l)
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

void    add_elm_last(t_list *s, int value)
{
    t_node *tmp;
    t_node *n;
    
    n = addnode(value);
    tmp = s->head;
    while(tmp != NULL)
    {
      if(tmp->next == s->top)
    { 
      s->top->next = n;
      s->top = n;
      break;
    }
    tmp = tmp->next;
    }  
}

void	addfirst(t_list *l)
{
	t_node	*newnode;

	newnode = addnode(get_lastelm(l));
	newnode->next = l->head;
	l->head = newnode;
}

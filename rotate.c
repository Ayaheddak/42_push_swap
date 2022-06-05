/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:32:52 by aheddak           #+#    #+#             */
/*   Updated: 2022/06/05 16:59:26 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate(t_list *s)
{
	t_node	*tmp;

	tmp = s->head;
	if (empty_list(s) && only_elem(s))
		return (0);
	else
	{
		while (tmp != NULL)
		{
			if (tmp->next == s->top)
			{
				s->top->next = s->head;
				s->head = s->top;
				tmp->next = NULL;
				s->top = tmp;
			}
			tmp = tmp->next;
		}
	}
	return (1);
}

int	rotate_two_stackes(t_list *a, t_list *b)
{
	rotate(a);
	rotate(b);
	return (1);
}

// int main()
// {
//   t_node *n1;
//   t_node *n2;
//   t_node *n3;
//   t_node *n4;
//   t_node *n5;
//   t_node *n6;
//   t_list *l1;
//   n1 = addnode(2);// 2 3 5
//   n2 = addnode(3);
//   n3 = addnode(5);
//   n4 = addnode(8);
//   n5 = addnode(9);
//   n6 = addnode(0);
//   l1 = creatlist();
//   l1->head = n1;
//   l1->top = n6;
//   n1->next =n2;
//   n2->next = n3;
//   n3->next = n4;
//   n4->next =n5;
//   n5->next = n6;
//   afficherlist(l1);
//   rotate_a(l1);
//   afficherlist(l1);
// }

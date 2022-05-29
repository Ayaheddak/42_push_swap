/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:24:47 by aheddak           #+#    #+#             */
/*   Updated: 2022/05/29 14:51:11 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// void swap_stack(t_list *s)
// {
// 	t_node *tmp;
// 	t_node *index;
//   t_node *current;

// 	tmp = NULL;
//   current = s->head;
//   while(current->next != NULL)    
//     current = current->next; 
// 	if (s->head->next == current)
// 		{
//       tmp = s->head;
//       s->head = current;
//       s->head->next = tmp;
// 			tmp->next = NULL;
// 		}
//   tmp = s->head;
// 	if (tmp->next->next == current)
// 	{
// 		current->next = tmp->next;
// 		tmp->next->next = NULL;
//     tmp->next = current;
//     //printf("\n%d\n", tmp->next->next->data);
//     current = tmp->next->next;
// 	}  
// }
void	swap_stack(t_list *s)
{
	t_node	*tmp;
	int		id;

	tmp = s->head;
	while (tmp != NULL)
	{
		if (tmp->next == s->top)
		{
			id = tmp->data;
			tmp->data = s->top->data;
			s->top->data = id;
		}
		tmp = tmp->next;
	}
}

void	swap_stack_a(t_list *a)
{
	if (!empty_list(a) && !only_elem(a))
	{
		swap_stack (a);
		write (1, "sa\n", 3);
	}
}

void	swap_stack_b(t_list *b)
{
	if (!empty_list(b) && !only_elem(b))
	{
		swap_stack(b);
		write(1, "sb\n", 3);
	}
}

void	swap_2_stacks(t_list *a, t_list *b)
{
	swap_stack_a(a);
	swap_stack_b(b);
	write (1, "ss\n", 3);
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
//   t_list *l2;
//   n1 = addnode(2);// 2 3 5
//   n2 = addnode(3);
//   n3 = addnode(5);
//   n4 = addnode(8);
//   n5 = addnode(9);
//   n6 = addnode(0);
//   // printf("%d\n",n1->data);
//   // printf("%d\n",n2->data);
//   // printf("%d\n",n3->data);
//   l1 = creatlist();
//   //l2 = creatlist();
//   l1->head = n1;
//   l1->top = n3;
//   n1->next =n2;
//   n2->next = n3;
// //   l2->head = n4;
// //   l2->top = n6;
// //   n4->next =n5;
// //   n5->next = n6;
//   afficherlist(l1);
//   swap_stack_a(l1);
//   afficherlist(l1);
// //   rv_rotate_a(l1);
// //   afficherlist(l1);
// //   push_a(l1,l2);
// //   afficherlist(l1);
// //   afficherlist(l2);
// //   rotate_a(l1);
// //   afficherlist(l1);
  
//  // printf("\n%d\n", l1->top->data);
//    //afficherList(l2);
//  // swap_stack_b(l2);
//  //afficherList(l2);
//   //printf("\n%d\n", l2->top->data);
//   //afficherList(l2);
//   //AjoutaFin(l,8);
//   // afficherList(l);
//   //printf("%d\n",TakeElmt(l));
//  // push_a(l1,l2);
//   // swap_2_stacks(l1,l2);
//   //push_a(l1,l2);
//  // afficherList(l1);
//   // afficherList(l2);
// }
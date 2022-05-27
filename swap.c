/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:24:47 by aheddak           #+#    #+#             */
/*   Updated: 2022/05/27 10:13:28 by aheddak          ###   ########.fr       */
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
void swap_stack(t_list *s)
{
	t_node  *tmp;
  int     id;
  
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
  if(!empty_list(a) || !only_elem(a))
  {
    swap_stack (a);
	  write (1, "sa\n", 3);
  }

}

void	swap_stack_b(t_list *b)
{
  if(!empty_list(b) || !only_elem(b))
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
int main() {
  t_node *n2;
  t_node *n3;
  t_node *n4;
   t_node *n5;
  t_node *n1;
  t_list *l1;
  t_list *l2;
  n1 = addnode(2);
  n2 = addnode(3);
  n3 = addnode(5);
  n4 = addnode(8);
  n4 = addnode(9);
  // n5 = addnode(9);
  // n6 = addnode(0);
  l1 = creatlist();
  // l1->head = n1;
  // l1->top = n3;
  // n1->next =n2;
  // n2->next = n3;
  l1->head = n1;
  l1->top = n4;
  n1->next =n2;
  n2->next = n3;
  // l2->head = n4;
  // l2->top = n6;
   n3->next =n4;
  // n5->next = n6;
  afficherlist(l1);
  //swap_stack_a(l1);
  push_stack(l1,n5);
  afficherlist(l1);
  printf("\n%d\n", l1->top->data);
  return 0;
}
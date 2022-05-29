/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:11:41 by aheddak           #+#    #+#             */
/*   Updated: 2022/05/29 11:44:21 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// t_node *AddNode(int value)
// {
//     t_node *newnode;
    
//     newnode = (t_node *)malloc (sizeof(t_node));
//     if (!newnode)
//         return (NULL);
//     newnode -> data = value;
//     newnode -> next = NULL;
//     return(newnode);
// }
// //create new list 
// t_list *CreatList()
// {
//   t_list *newlist;
   
//   newlist =(t_list*) malloc(sizeof(t_list));
//   newlist->head = NULL;
//   newlist->top = NULL;
//   return(newlist);
// }

// int empty_list(t_list *s)
// {
//   //if(s->top == NULL)
//   if(s->head == NULL)
//     return(1);
//   return(0);
// }

// void swap_stack(t_list *s)
// {
//   t_node *temp;
//   t_node *t;
  
//   temp = s->head;
//   t = s->top;
//   while(temp != NULL)
//   { 
//     if(temp->next->next == s->top)  
//     {
     
//       s->top->next = temp->next;
// 			temp->next->next = NULL;
// 	  	temp->next =s->top; 
//       t = temp->next->next;
//       s->top = t;
//       break;
//     }
//     temp=temp->next;
//   }
// }
// void swap_stack_a(t_list *a)
// {
//   swap_stack(a);
//   write(1,"sa\n",3);
// }

// void swap_stack_b(t_list *b)
// {
//   swap_stack(b);
//   write(1,"sb\n",3);
// }

// void swap_2_stacks(t_list *a, t_list *b)
// {
//   swap_stack_a(a);
//   swap_stack_b(b);
//   write(1,"ss\n",3);
// }

// int get_elem(t_list *l)
// {
//   t_node *tmp;
//   int value;

//   tmp = l->head;
//   while(tmp!= NULL)
//   { 
//     if(tmp->next == l->top)
//     {
//      value = tmp->next->data;
//      tmp->next= NULL;
//      return(value);
//     }
//     tmp  = tmp->next;
//   }
// }

// void push_a(t_list *a,t_list *b)
// {
//   t_node *tmp;
//   t_node *newnode;
//   int value;
  
//   value = get_elem(b);
//   newnode  = AddNode(value);
//   tmp = a->head;
//   while(tmp != NULL)
//   {
//     if(tmp->next == NULL)
//     {
//       tmp->next = newnode;
//       newnode->next=NULL;
//       break;
//     }
//     tmp = tmp->next;
//   }
//   write(1,"pa\n",3);
// }

// void push_b(t_list *a,t_list *b)
// {
//   t_node *tmp;
//   t_node *newnode;
//   int value;
  
//   value = get_elem(a);
//   newnode  = AddNode(value);
//   tmp = b->head;
//   while(tmp != NULL)
//   {
//     if(tmp->next == NULL)
//     {
//       tmp->next = newnode;
//       newnode->next=NULL;
//       break;
//     }
//     tmp = tmp->next;
//   }
//   write(1,"pb\n",3);
// }

// void AddFirst(t_list *l)
// {
//   t_node *newnode;
  
//   newnode=AddNode(get_elem(l));
//   newnode->next= l->head;
//   l->head= newnode;
// }

// void rotate_a(t_list *a)
// {
//   AddFirst(a);
//   write(1,"ra\n",3);
// }

// void rotate_b(t_list *b)
// {
//   AddFirst(b);
//   write(1,"rb\n",3);
// }

// void rotate_two_stacks(t_list *a, t_list *b)
// {
//   rotate_a(a);
//   rotate_b(b);
//   write(1,"rr\n",3);
// }

// void rv_rotate_a(t_list *a)
// {
//   AddFirst(a);
//   write(1,"rra\n",4);
// }
// void rv_rotate_b(t_list *b)
// {
//   AddFirst(b);
//   write(1,"rrb\n",4);
// }

// void rv_rotate_two_stackes(t_list *b,t_list *a)
// {
//   rv_rotate_a(a);
//   rv_rotate_b(b);
//   write(1,"rrr\n",4);
// }

// void afficherList(t_list *s)
// {
//     t_node *tmp;
    
//     tmp = s->head;
//     printf("---------- aywaaa bdina -----------\n");
//     while(tmp != NULL)
//     {
//         printf("%d\n ", tmp->data);
//         tmp=tmp->next;
//     }
//     printf("\n");
//     printf("-------------- salinaa --------------\n");
    
// }

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
//   l2 = creatlist();
//   l1->head = n1;
//   l1->top = n3;
//   n1->next =n2;
//   n2->next = n3;
//   l2->head = n4;
//   l2->top = n6;
//   n4->next =n5;
//   n5->next = n6;
//   afficherlist(l1);
//   swap_stack_a(l1);
//   afficherlist(l1);
//   rv_rotate_a(l1);
//   afficherlist(l1);
//   push_a(l1,l2);
//   afficherlist(l1);
//   afficherlist(l2);
//   rotate_a(l1);
//   afficherlist(l1);
  
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
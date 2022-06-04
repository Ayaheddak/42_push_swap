/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_100.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 02:23:18 by aheddak           #+#    #+#             */
/*   Updated: 2022/06/04 14:43:15 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int *copy_list_a(t_list *a, int arr[])
{
    int     i;
    t_node  *tmp;

    i = 0;
    tmp = a->head;
    while (tmp != NULL)
    {
        arr[i] = tmp->data;
        tmp = tmp->next;
        i++;
    }
    return (arr);
}

void sort_array(int arr[],int n)//n sizeof arr "bubbleSort"
{
    int i;
    int j;
    int tmp;

    i = 0;
    tmp = 0;
    while (i < n)
    {
        j = i+1;
        while(j < n)
        {
            if(arr[i] > arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
            j++;
        }
        i++;
    }
}

// void a_to_b(t_list *a, t_list *b, int *arr)
// {
//     int size;
//     int key_nbr;
//     int size_b;
//     int key;
//     int first;
//     int last;

//     size = get_lsize(a);
//     key_nbr = size/8;
//     key = key_nbr;
//     size_b = 0;
//     while (!empty_list(a))
//     {
//         first = (size/2) - key;//index first
//         last = (size/2) - key;// index last
//         while()
//         {
//             if(a->top->data >= arr[first] && a->top->data <= arr[last])
//             {
//                 push_b(a,b);
//                 if(a->top->data < )
//             }
//         }
       
//         key+=key_nbr;
//     }
// }





















// int is_top(int *arr, int top, int first, int last)//size
// {
//     int i;
//     int j;
    
//     i = first; 
//     j = last;
//     while(i <= j)
//     {
//         if (arr[i] == top)
//             return (1);
//         i++;
//     }
//     return (0);
// }
// void rotate_elm(t_list *a, t_list *b , int index ,int *arr)
// {
//     int proximity;
//     int i;
//     int pos;
//     int size_b;

//     proximity = (get_lsize(b) / 2); 
//     i = 0;
//     size_b = index + 1;
//     while (index  >= 0)
//     {
//         pos =get_index(b,arr[index]);
//         if (b->top->data == arr[index])
//             push_a(a,b);
//         else if(pos <= (size_b / 2))
//         {
//              while ( b->top->data != arr[index])
//                 rotate_b(b);
//             push_a(a,b);
//         }
//        else if (pos > (size_b / 2))
//        {
//            while (b->top->data != arr[index])
//             rv_rotate_b(b);
//             push_a(a,b);    
//        }
      
//         index--;
//     }
// }
void    sort_aywa(t_list *a, t_list *b, int *arr)
{
    int key_nbr;
    int size;
	int size_b;
    int middle;
    int key;
    int first;
    int last;
    //int j;

    size = get_lsize(a);
    middle = size/2;//50
    key_nbr = size/8;// chunk size
    key = key_nbr;
	size_b = 0;
    first = middle - key;
    last = middle + key;
    int i;
    // j = get_size(a) - 3;
    i = 1;
    while(i)
    {
        if (size_b == size - 3)
             break; 
        if (a->top->data > arr[size - 3])
            rotate_a(a);
        else if (a->top->data >= arr[first] && a->top->data <= arr[last])
        {
            push_b(a,b);
            if (b->top->data < arr[middle])
                rotate_b(b);
            size_b++;
		}
        else
            rotate_a(a);
        if (size_b == (last - first) + 1)
        {
            first -= key;
            last += key;
        }
        if ((first < 0 || last > (size - 4)))
        {
            first = 0;
            last = size - 4;
        }
    }
    if(!is_sorted(a))
        three_elements(a);
    rotate_elm(a,b,size -4,arr);
}

// int get_max(t_list *l)
// {
//     t_node *tmp;
//     int max;

//     tmp = l->head;
//     max = l->head->data;
//     while (tmp != NULL)
//     {
//         if(max < tmp->data)
//             max = tmp->data;
//         tmp = tmp->next;
//     }
//     return (max);
// }

// t_node	*get_max_node(t_list *a)
// {
// 	int		max;
// 	t_node	*temp;
// 	t_node	*big;

// 	max = a->head->data;
// 	temp = a->head->next;
// 	big = a->head;
// 	while (temp != NULL)
// 	{
// 		if (temp->data > max)
// 		{
// 			max = temp->data;
// 			big = temp;
// 		}
// 		temp = temp->next;
// 	}
// 	return (big);
// }
// void sent_to_a(t_list *a, t_list *b)
// {
//     int i;
//     t_node *max;
//     int s;
    
//     i = 0;
//     while(j < get_lsize(b)) 
//     {
//         max = get_max_node(b);
//         if (b ->top->data == max)
//             push_a(a,b);
//         else if (max->next->data == b->top->data)
//         {
//             swap_stack_b(b);
//  			push_a(a, b);
//         }
//         else
//             rotate_elm(a, b);
//     }
// }

// j = 0;
// 	s = size;
// 	while (j < s)
// 	{
// 		max = get_max(b);
// 		index = get_min_index(b, max);
// 		if (b->top->data == max->data)
// 			push_a(a, b);
// 		else if (max->next->data == b->top->data)
// 		{
// 			swap_stack_b(b);
// 			push_a(a, b);
// 		}
// 		else
// 			rotate_conditions(a, b, index, size);
// 		size--;
// 		j++;
// 		if (is_empty(b))
// 			break ;
// 	}
// t_list *sort_100 (t_list *a, t_list *b, int *arr)
// {
//     sort_aywa(a, b,arr);
//     while (!empty_list(b))
//        {
//            sorting_elementss(b);
//            push_a(a,b);
//        } 
//     // while (is_sorted(b))
//     //     push_a(a,b);                                        
//     return (a);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_100.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 02:23:18 by aheddak           #+#    #+#             */
/*   Updated: 2022/06/03 09:08:53 by aheddak          ###   ########.fr       */
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
    //ft_free(a);
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

int is_top(int *arr, int top, int n)
{
    int i;
    int j;
    
    i = n/2 - 10;
    j = i + 20;
    while(i <= j)
    {
        if (arr[i] == top)
            return (0);
        i++;
    }
    return (1);
}

void is_exit(t_list *a, t_list *b, int *arr)
{
    if (is_top(arr, a->top->data, get_lsize(a)))
        sorting_elements(a,b);
    else
        rotate_a(a);
}

t_list *sort_100(t_list *a, t_list *b, int *arr)
{
    int i;
    int size;
    int j;

    size = get_lsize(a);
    i = size - 20;
    j = 0;
    while(j<i)
    {
        is_exit(a,b,arr);
    }
    return(a);
}
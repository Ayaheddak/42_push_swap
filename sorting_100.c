/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_100.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 02:23:18 by aheddak           #+#    #+#             */
/*   Updated: 2022/06/02 08:13:42 by aheddak          ###   ########.fr       */
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
/*-------------------Methode 1-------------------*/
void sort_array(int arr[], int n)//n=sizeofstack
{
    int i;
    int key;
    int j;

    i = 1;
    while (i < n)
    {
        key = arr[i];
        j = i -1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        i++;
    }
}
/*-------------------Methode 2 -------------------*/
void sort_array2(int arr[],int n)
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
t_list *sort_100(t_list *a, t_list *b)
{
    return (a);
}
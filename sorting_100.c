/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_100.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 02:23:18 by aheddak           #+#    #+#             */
/*   Updated: 2022/06/07 10:55:34 by aheddak          ###   ########.fr       */
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

void sort_array(int arr[],int n)
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

void  rotate_elm(t_list *a, t_list *b , int index ,int *arr)//eeror
{
    int proximity;
    int i;
    int pos;
    int size_b;
    int r;

    proximity = (get_lsize(b) / 2); 
    i = 0;
    r = 0;
    size_b = index + 1;
    while (index  >= 0)
    {
        
         if (b->top && b->top->data == arr[index])
         {
              push_a(a,b) && my_putstr("pa");
              size_b--;
               index--;
         }
         /*prb hereeeeeeeeee */
        else if (b->top && r==0)
        {
            push_a(a,b) && my_putstr("pa");
            rotate(a) && my_putstr("ra"); 
            size_b--;
            r+=1;
        }
         else if (r != 0 && a->head && (a->head->data == arr[index]))
        {
            rv_rotate(a)&& my_putstr("rra");
            index--;
            r-=1;
        }
        else if (r != 0 && (a->head->data < b->top->data))
        {
                push_a(a,b) && my_putstr("pa");
                rotate(a)&& my_putstr("ra"); 
                size_b--;
                r+=1;
        }
        /*-------------------------- */
        else
        {
            pos =get_index(b,arr[index]);
            if (pos <= (size_b / 2))
            {
                while ( b->top->data != arr[index])
                    rv_rotate(b)&& my_putstr("rrb");
                push_a(a,b) && my_putstr("pa");
                index--;
                size_b--;
             }
            else if (pos > (size_b / 2) )
           {
             while (b->top->data != arr[index])
             {
              rotate(b) && my_putstr("rb"); 
            //  printf("size_b------------->%d\n",size_b);
            //   printf("index------->%d\n",index);
            //   printf("pos------->%d\n",pos);
             }
            push_a(a,b) && my_putstr("pa"); 
                index--;
               size_b--;  
          }
        }
       
        }
    //  else 
    //     {
    //         rv_rotate(a)&& my_putstr("rra");
    //         index--;
    //         r-=1;
    //     }
       // }
        
    //     else if (pos <= (size_b / 2))
    //     {
    //          while ( b->top->data != arr[index])
    //            rv_rotate(b)&& my_putstr("rrb");
    //            push_a(a,b) && my_putstr("pa");
    //     }
    //    else if (pos > (size_b / 2))
    //    {
    //        while (b->top->data != arr[index])
    //         rotate(b)&& my_putstr---- 
    //         push_a(a,b) && my_putstr("pa");   
    //    }
        // push_a(a,b) && my_putstr("pa");
     // size_b--;
        // index--;
    }
void    sort_aywa(t_list *a, t_list *b, int *arr)
{
    int key_nbr;
    int size;
	int size_b;
    int middle;
    int key;
    int first;
    int last;
//if 500 -> size/15
//if 500 -> size/5
    size = get_lsize(a);
    middle = size/2;//50
    key_nbr = size/5;// chunk size
    key = key_nbr;
	size_b = 0;
    first = middle - key;
    last = middle + key;
    int i;
    i = 1;
    while(i)
    {
        if (size_b == size - 3)
             break; 
        if (a->top->data > arr[size - 3])
            rotate(a)&& my_putstr("ra");
        else if (a->top->data >= arr[first] && a->top->data <= arr[last])
        {
            push_b(a,b)&& my_putstr("pb");
            if (b->top->data < arr[middle])
                rotate(b)&& my_putstr("rb");
            size_b++;
		}
        else
            rotate(a)&& !my_putstr("ra");
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

int my_putstr(char *s)
{
    int i;

    i = 0;
    if (!s)
        return(0);
    while(s[i] != '\0')
    {
        write (1, &s[i], 1);
        i++;
    }
   return( write(1, "\n", 1));// il return 1 bc write 1 is succ
}
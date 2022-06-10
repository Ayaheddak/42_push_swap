/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 12:48:15 by aheddak           #+#    #+#             */
/*   Updated: 2022/06/10 16:36:59 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "push_swap.h"

int get_lsize(t_list *l)
{
  int       len;
  t_node    *tmp;
  
  len = 0;
  tmp = l->head;
  while (tmp != NULL)
  {
      tmp=tmp->next;
      len++;
  }
  return(len);
}

void    sort_lessten(t_list *a, t_list *b , int *arr)
{
    int lsize;

    lsize = get_lsize(a);
    if (!is_sorted(a) && !only_elem(a) && !empty_list(a))
    {
        if (lsize == 2)
           swap_stack(a)&& !my_putstr("sa");
        else if (lsize == 3)
            three_elements(a);
        else if (lsize > 3 && lsize <= 10)
            ten_elements(a,b);
        else 
         sort_aywa(a, b,arr);
    } 
}

// void    sort_moreten(t_list *a, t_list *b)
// {
//     int lsize;

//     lsize = get_lsize(a);
//     if (!is_sorted(a) && !only_elem(a) && !empty_list(a))
//     {
//         if (lsize > 10 && lsize <= 100)
//             sort_100(a, b);
        
//     } 
// }
// int main(int ac, char *av[])
// {
//     t_list *stack_a;
//     t_list *stack_b;

//     stack_a = creatlist();
// 	stack_b = creatlist();
//     if(ac > 1)
//     {
//         stack_a = get_stack(ac, av,stack_a);
// 		ft_duplicates(stack_a);
	
// 	sort_lessten(stack_a,stack_b);

//     }
// 	//while (1);
// }


int main(int ac, char *av[])
{
    t_list  *stack_a;
    t_list  *stack_b;
    int     *arr;
    int     size;

    stack_a = creatlist();
	stack_b = creatlist();
    if(ac > 1)
    {
        stack_a = get_stack(ac, av,stack_a);
		ft_duplicates(stack_a);
 //afficherlist(stack_a);
       size = get_lsize(stack_a);
       arr = malloc(sizeof(int)*size);
       copy_list_a(stack_a, arr);
       sort_array(arr, size);
       sort_lessten(stack_a, stack_b , arr);
    }
    free(arr);
    ft_freelist(stack_a);
    ft_freelist(stack_b);
	system("leaks push_swap");
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 12:48:15 by aheddak           #+#    #+#             */
/*   Updated: 2022/06/13 23:32:56 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char *av[])
{
	t_list	*stack_a;
	t_list	*stack_b;
	t_incs	incs;
	int		size;

	//incs = NULL;
	if (ac > 1)
	{
		stack_a = creatlist();
		stack_b = creatlist();
		stack_a = get_stack(ac, av, stack_a);
		ft_duplicates(stack_a);
		size = get_lsize(stack_a);
		incs.arr = malloc(sizeof(int) * size);
		copy_list_a(stack_a, incs.arr);
		sort_array(incs.arr, size);
		conditions(stack_a, stack_b, &incs);
		free (incs.arr);
		ft_freelist (stack_a);
		ft_freelist (stack_b);
	}
}

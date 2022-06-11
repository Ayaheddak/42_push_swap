/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 12:48:15 by aheddak           #+#    #+#             */
/*   Updated: 2022/06/11 10:54:41 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char *av[])
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		*arr;
	int		size;

	if (ac > 1)
	{
		stack_a = creatlist();
		stack_b = creatlist();
		stack_a = get_stack(ac, av, stack_a);
		ft_duplicates(stack_a);
		size = get_lsize(stack_a);
		arr = malloc(sizeof(int) * size);
		copy_list_a(stack_a, arr);
		sort_array(arr, size);
		conditions(stack_a, stack_b, arr);
		free (arr);
		ft_freelist (stack_a);
		ft_freelist (stack_b);
	}
}

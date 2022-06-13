/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conditions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 10:43:23 by aheddak           #+#    #+#             */
/*   Updated: 2022/06/13 23:29:44 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*copy_list_a(t_list *a, int arr[])
{
	int		i;
	t_node	*tmp;

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

void	sort_array(int arr[], int n)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	tmp = 0;
	while (i < n)
	{
		j = i + 1;
		while (j < n)
		{
			if (arr[i] > arr[j])
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

int	get_lsize(t_list *l)
{
	int		len;
	t_node	*tmp;

	len = 0;
	tmp = l->head;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		len++;
	}
	return (len);
}

void	conditions(t_list *a, t_list *b, t_incs *incs)
{
	int		lsize;

	lsize = get_lsize(a);
	if (!is_sorted(a) && !only_elem(a) && !empty_list(a))
	{
		if (lsize == 2)
			(swap_stack(a) && my_putstr("sa"));
		else if (lsize == 3)
			three_elements(a);
		else if (lsize > 3 && lsize <= 10)
			ten_elements(a, b);
		else if (lsize > 10 && lsize <= 100)
			send_a_to_b(a, b, incs, (lsize / 5));
		else if (lsize > 100 && lsize <= 500)
			send_a_to_b(a, b, incs, (lsize / 15));
	}
}

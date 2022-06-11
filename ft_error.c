/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 03:04:13 by aheddak           #+#    #+#             */
/*   Updated: 2022/06/11 06:35:27 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	addfirst(t_list *stack, t_node *n)
{
	if (!stack->top)
	{
		stack->top = n;
		stack->head = stack->top;
	}
	else
	{
		n->next = stack->head;
		stack->head = n;
	}
}

t_list	*get_stack(int ac, char **av, t_list *stack)
{
	int		i;
	int		j;
	int		atoi;
	char	**s_str;

	i = 1;
	while (i < ac)
	{
		j = 0;
		s_str = ft_split(av[i], ' ');
		while (s_str[j])
		{
			atoi = ft_atoi_handle(s_str[j]);
			addfirst(stack, addnode(atoi));
			free(s_str[j]);
			j++;
		}
		free(s_str);
		i++;
	}
	return (stack);
}

void	ft_duplicates(t_list *a)
{
	t_node	*tmp;
	t_node	*b;

	tmp = a->head;
	while (tmp != NULL)
	{
		b = tmp->next;
		while (b != NULL)
		{	
			if (tmp->data == b->data)
			{
				write (2, "Error\n", 6);
				exit(1);
			}
			b = b->next;
		}
		tmp = tmp->next;
	}
}

void	ft_freelist(t_list *l)
{
	t_node	*tmp;

	while (l->head != NULL)
	{
		tmp = l->head;
		l->head = l->head->next;
		free (tmp);
	}
	free (l);
}

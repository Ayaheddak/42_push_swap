/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 03:04:13 by aheddak           #+#    #+#             */
/*   Updated: 2022/05/26 22:40:59 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"//push_at_first

void	push_first(t_list *stack, t_node *n)
{
	n->next = stack->head;
	stack->head = n;
}

t_list	*get_stack(int ac, char *av[])
{
	int		i;
	int		j;
	int		atoi;
	char	**s_str;
	t_list	*stack;

	i = 1;
	while (i < ac)
	{
		j = 0;
		s_str = ft_split(av[i], ' ');
		while (s_str[j])
		{
			atoi = ft_atoi_handle(s_str[j]);
			push_first(stack, addnode(atoi));
			j++;
		}
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
				write (1, "Error\n", 6);
				exit(1);
			}
			b = b->next;
		}
		tmp = tmp->next;
	}
}

void	afficherlist(t_list *s)
{
	t_node	*tmp;

	tmp = s->head;
	printf("---------- aywaaa bdina -----------\n");
	while (tmp != NULL)
	{
		printf("%d\n ", tmp->data);
		tmp = tmp->next;
	}
	printf("\n");
	printf("---------- aywaaa salina -----------\n");
}

// int main(int ac, char *av[])
// {
//     t_list *a;
//     t_list *b;

//     a = creatlist();
//     b = creatlist();
//     if(ac > 1)
//     {
//         a = get_stack(ac, av);
// 		ft_duplicates(a);
//         afficherlist(a);
//     }
// 	//while (1);
// }

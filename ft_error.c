/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 03:04:13 by aheddak           #+#    #+#             */
/*   Updated: 2022/06/09 08:51:36 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	addfirst(t_list *stack, t_node *n)//addlast
// {
// 	if (empty_list(stack))
// 	{
// 		stack->top = n;
// 		stack->head = stack->top;
// 	}
// 	else 
// 	{
// 		n->next = stack->head;
// 		stack->head = n;
// 	}	
// }
void    addfirst(t_list *stack, t_node *n)//addlast
{
      if (!stack->top)
      {
        stack->top = n;
        stack->head = stack->top;
      }
      else
    n->next = stack->head;
    stack->head = n;  
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
			j++;
		}
		free(s_str[j]);
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

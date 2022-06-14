/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 10:21:31 by aheddak           #+#    #+#             */
/*   Updated: 2022/06/14 22:38:26 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "push_swap.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_err(void)
{
	write (2, "Error\n", 6);
	exit (0);
}

void	cond_checker(char *line, t_list *stack_a, t_list *stack_b)
{
	if (!ft_strcmp(line, "sa\n"))
		swap_stack(stack_a);
	else if (!ft_strcmp(line, "sb\n"))
		swap_stack(stack_b);
	else if (!ft_strcmp(line, "ss\n"))
		swap_2_stacks(stack_a, stack_b);
	else if (!ft_strcmp(line, "ra\n"))
		rotate(stack_a);
	else if (!ft_strcmp(line, "rb\n"))
		rotate(stack_b);
	else if (!ft_strcmp(line, "rr\n"))
		rotate_two_stackes(stack_a, stack_b);
	else if (!ft_strcmp(line, "rra\n"))
		rv_rotate(stack_a);
	else if (!ft_strcmp(line, "rrb\n"))
		rv_rotate(stack_b);
	else if (!ft_strcmp(line, "rrr\n"))
		rv_rotate_stackes(stack_a, stack_b);
	else if (!ft_strcmp(line, "pa\n"))
		push_a(stack_a, stack_b);
	else if (!ft_strcmp(line, "pb\n"))
		push_b(stack_a, stack_b);
	else
		ft_err();
}

int	main(int ac, char *av[])
{
	char	*line ;
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = creatlist();
	stack_b = creatlist();
	if (ac == 1)
		return (0);
	stack_a = get_stack(ac, av, stack_a);
	line = get_next_line(0);
	while (line)
	{
		cond_checker(line, stack_a, stack_b);
		free(line);
		line = get_next_line(0);
	}
	if (is_sorted(stack_a) && empty_list(stack_b))
		write(1, "OK\n", 3);
	else
		write (1, "KO\n", 3);
}

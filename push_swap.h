/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:29:28 by aheddak           #+#    #+#             */
/*   Updated: 2022/05/25 04:32:22 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef    PUSH_SWAP_H
# define    PUSH_SWAP_H
# include   <string.h>
# include   <stdio.h>
# include   <stdlib.h>
# include   <unistd.h>

typedef struct s_node
{
	int					data;
	struct s_node		*next;

}	t_node;
typedef struct s_list
{
	t_node	*head;
	t_node	*top;
}	t_list;
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);
int		ft_atoi_handle(char *str);
t_node	*addnode(int value);
t_list	*CreatList(void);
int		empty_list(t_list *s);
void	swap_stack(t_list *s);
void	swap_stack_a(t_list *a);
void	swap_stack_b(t_list *b);
void	swap_2_stacks(t_list *a, t_list *b);
int		get_elem(t_list *l);
void	push_a(t_list *a, t_list *b);
void	push_b(t_list *a, t_list *b);
void	addfirst(t_list *l);
void	rotate_a(t_list *a);
void	rotate_b(t_list *b);
void	rotate_two_stacks(t_list *a, t_list *b);
void	rv_rotate_a(t_list *a);
void	rv_rotate_b(t_list *b);
void	rv_rotate_two_stackes(t_list *b, t_list *a);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:29:28 by aheddak           #+#    #+#             */
/*   Updated: 2022/06/11 10:55:05 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef    PUSH_SWAP_H
# define    PUSH_SWAP_H
# include   <string.h>
# include   <stdio.h>
# include   <stdlib.h>
# include   <unistd.h>
# include	"gnl/get_next_line.h"

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

typedef struct s_incs
{
	int	size_b;
	int	index;
	int	r;
}			t_incs;

typedef struct s_args
{
	int	size;
	int	size_b;
	int	key;
	int	first;
	int	last;
}			t_args;

int		get_index(t_list *l, int n);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);
int		ft_atoi_handle(char *str);
int		swap_stack(t_list *s);
int		swap_2_stacks(t_list *a, t_list *b);
t_node	*addnode(int value);
t_list	*creatlist(void);
int		empty_list(t_list *s);
int		only_elem(t_list *s);
int		rv_rotate(t_list *a);
int		rv_rotate_stackes(t_list *b, t_list *a);
void	addfirst(t_list *stack, t_node *n);
void	addfirst(t_list *stack, t_node *n);
int		rotate(t_list *a);
int		rotate_two_stackes(t_list *a, t_list *b);
t_node	*get_last(t_list *l);
int		push_a(t_list *a, t_list *b);
int		push_b(t_list *a, t_list *b);
int		is_sorted(t_list *l);
int		get_lsize(t_list *l);
t_list	*three_elements(t_list *a);
void	conditions(t_list *a, t_list *b, int *arr);
void	sorting_elements(t_list *a, t_list *b);
t_list	*ten_elements(t_list *a, t_list *b);
void	ft_freelist(t_list *l);
t_list	*get_stack(int ac, char **av, t_list *stack);
void	ft_duplicates(t_list *a);
int		*copy_list_a(t_list *a, int arr[]);//ft att
void	sort_array(int arr[], int n);
void	send_a_to_b(t_list *a, t_list *b, int *arr, int key_nbr);
int		my_putstr(char *s);

#endif

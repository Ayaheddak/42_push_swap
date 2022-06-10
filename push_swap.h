/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:29:28 by aheddak           #+#    #+#             */
/*   Updated: 2022/06/10 13:43:11 by aheddak          ###   ########.fr       */
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

int 	get_min(t_list *l);
int 	get_index(t_list *l ,int n);
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
int	rv_rotate(t_list *a);
int	rv_rotate_stackes(t_list *b, t_list *a);
void	addfirst(t_list *stack, t_node *n);
void	addfirst(t_list *stack, t_node *n);
// void	rotate_b(t_list *b);
int	rotate(t_list *a);
int	rotate_two_stackes(t_list *a, t_list *b);
t_node	*get_last(t_list *l);
void	addlast(t_list *s, t_node *n);
int	push_a(t_list *a, t_list *b);
int	push_b(t_list *a, t_list *b);
void	afficherlist(t_list *s);
int		is_sorted(t_list *l);
t_list	*conditions(t_list *l);
int		get_lsize(t_list *l);
t_list  *three_elements(t_list *a);
void    sort_lessten(t_list *a, t_list *b , int *arr);
void	sorting_elements(t_list *a,t_list *b);
t_list	*ten_elements(t_list *a, t_list *b);
void    ft_freelist(t_list *l);
t_list	*get_stack(int ac, char **av, t_list *stack);
void	ft_duplicates(t_list *a);
int 	*copy_list_a(t_list *a, int arr[]);
void	sort_array(int arr[],int n);
int		is_top(int *arr, int top, int first, int last);
void	sort_aywa(t_list *a, t_list *b, int *arr);
t_list	*sort_100 (t_list *a, t_list *b, int *arr);
int		my_putstr(char *s);

#endif

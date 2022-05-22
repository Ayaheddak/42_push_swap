/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:29:28 by aheddak           #+#    #+#             */
/*   Updated: 2022/05/19 20:59:07 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef    PUSH_SWAP_H
# define    PUSH_SWAP_H
# include   <string.h>
# include   <stdio.h>
# include   <stdlib.h>
# include   <unistd.h>

char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);

typedef struct s_node
{  
    int data;  
    struct s_node *next;  
}               t_node;      


typedef struct s_list
{
    t_node *head;
    t_node *top;
}               t_list;

# endif
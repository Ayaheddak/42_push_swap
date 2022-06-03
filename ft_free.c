/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 05:05:20 by aheddak           #+#    #+#             */
/*   Updated: 2022/06/03 05:42:12 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_freelist(t_list *l)
{
    t_node  *tmp;
    
    while (l->head != NULL)
    {
        tmp = l->head;
        l->head = l->head->next;
        free (tmp);
    }
    free (l);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escudo5 <escudo5@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:15:13 by smarquez          #+#    #+#             */
/*   Updated: 2024/11/29 12:36:11 by escudo5          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void pb(t_stack_node **a, t_stack_node **b, bool print)
{
   t_stack_node *node;
    if (*a == NULL)
        return ;
    node = *a;
    *a = (*a)->next;
    if (*a)
        (*a)->prev = NULL;
    node->next = *b;
    if (*b)
        (*b)->prev = node;
    *b = node;
    node->prev = NULL;
    if (print)
        ft_putstr_fd("pb\n", 1);
}

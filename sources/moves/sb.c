/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escudo5 <escudo5@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:59:24 by smarquez          #+#    #+#             */
/*   Updated: 2024/11/29 12:57:28 by escudo5          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sb(t_stack_node **b, bool print)
{
	t_stack_node	*node1;
	t_stack_node	*node2;

	if (*b == NULL || (*b)->next == NULL)
		return ;
	node1 = *b;
	node2 = (*b)->next;
	node1->next = node2->next;
	if (node2->next != NULL)
		node2->next->prev = node1;
	node2->prev = node1->prev;
	node2->next = node1;
	node1->prev = node2;
	*b = node2;
	if (print)
		ft_putstr_fd("sb\n", 1);
}

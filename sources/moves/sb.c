/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:59:24 by smarquez          #+#    #+#             */
/*   Updated: 2025/02/04 10:51:20 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_list **b, bool print)
{
	t_list	*node1;
	t_list	*node2;

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
	if (print == true)
		ft_putstr_fd("sb\n", 1);
}

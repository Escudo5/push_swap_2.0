/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escudo5 <escudo5@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:46:12 by smarquez          #+#    #+#             */
/*   Updated: 2024/11/29 12:36:25 by escudo5          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack_node **a, bool print)
{
	t_stack_node	*node1;
	t_stack_node	*node2;

	if (*a == NULL || (*a)->next == NULL)
		return ;
	node1 = *a;
	node2 = (*a)->next;
	node1->next = node2->next;
	if (node2->next != NULL)
		node2->next->prev = node1;
	node2->prev = node1->prev;
	node2->next = node1;
	node1->prev = node2;
	*a = node2;
	if (print)
		ft_putstr_fd("sa\n", 1);
}

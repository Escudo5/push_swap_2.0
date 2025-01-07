/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:08:37 by smarquez          #+#    #+#             */
/*   Updated: 2025/01/07 14:49:55 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_stack_node **b)
{
	t_stack_node	*last;
	t_stack_node	*second_last;

	if (*b == NULL || (*b)->next == NULL)
		return ;
	last = *b;
	while (last->next != NULL)
		last = last->next;
	second_last = last->prev;
	second_last->next = NULL;
	last->next = *b;
	(*b)->prev = last;
	last->prev = NULL;
	*b = last;
	ft_putstr_fd("rrb\n", 1);
}

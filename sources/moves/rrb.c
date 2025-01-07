/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escudo5 <escudo5@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:08:37 by smarquez          #+#    #+#             */
/*   Updated: 2024/11/29 12:36:21 by escudo5          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrb(t_stack_node **b, bool print)
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
	if (print)
		ft_putstr_fd("rrb\n", 1);
}

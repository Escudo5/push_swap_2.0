/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:08:37 by smarquez          #+#    #+#             */
/*   Updated: 2025/01/13 18:05:06 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_list **stack)
{
	t_list	*second_last;
	t_list	*last;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		second_last = *stack;
		while (second_last->next->next != NULL)
			second_last = second_last->next;
		last = second_last->next;
		second_last->next = NULL;
		last->next = *stack;
		(*stack)->prev = last;
		last->prev = NULL;
		*stack = last;
	}
	ft_printf("rrb\n");
}

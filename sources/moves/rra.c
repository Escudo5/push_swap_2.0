/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:46:56 by smarquez          #+#    #+#             */
/*   Updated: 2025/02/04 10:51:00 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **stack, bool print)
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
	if (print == true)
		ft_printf("rra\n");
}

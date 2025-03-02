/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:59:02 by smarquez          #+#    #+#             */
/*   Updated: 2025/02/04 10:58:26 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	order_numbers(t_list **stack_a, int first, int second, int third)
{
	if ((third > second) && (third > first))
		sa(stack_a, true);
	if ((second > third) && (second > first))
	{
		if (first > third)
			rra(stack_a, true);
		else
		{
			rra(stack_a, true);
			sa(stack_a, true);
		}
	}
	if ((first > second) && (first > third))
	{
		if (second > third)
		{
			ra(stack_a, true);
			sa(stack_a, true);
		}
		else
			ra(stack_a, true);
	}
}

void	sort_three(t_list **stack_a)
{
	t_list	*start;
	int		first;
	int		second;
	int		third;

	start = *stack_a;
	first = *(int *)start->content;
	second = *(int *)start->next->content;
	third = *(int *)start->next->next->content;
	order_numbers(stack_a, first, second, third);
}

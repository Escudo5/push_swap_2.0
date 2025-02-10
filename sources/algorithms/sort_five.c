/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:26:16 by smarquez          #+#    #+#             */
/*   Updated: 2025/02/10 10:18:45 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five(t_list **stack_a, t_list **stack_b, int digits)
{
	while (ft_lstsize(*stack_a) > 3)
	{
		if ((*stack_a)->index != 0 && (*stack_a)->index != 1)
		{
			if ((count_index_position(stack_a, 0) <= (digits / 2))
				|| (count_index_position(stack_a, 1) <= (digits / 2)))
				ra(stack_a, true);
			else
				rra(stack_a, true);
		}
		if (((*stack_a)->index == 0) || ((*stack_a)->index == 1))
			pb(stack_a, stack_b, true);
	}
	if (!nums_ordered(stack_a))
		sort_three(stack_a);
	if (nums_ordered(stack_b))
		sb(stack_b, true);
	pa(stack_a, stack_b, true);
	pa(stack_a, stack_b, true);
}

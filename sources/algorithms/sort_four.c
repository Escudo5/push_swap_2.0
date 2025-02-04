/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:21:24 by smarquez          #+#    #+#             */
/*   Updated: 2025/02/04 10:58:46 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_four(t_list **stack_a, t_list **stack_b, int digits)
{
	while (ft_lstsize(*stack_a) > 3)
	{
		if ((*stack_a)->index != 0)
		{
			if (count_index_position(stack_a, 0) <= (digits / 2))
				ra(stack_a, true);
			else
				rra(stack_a, true);
		}
		if ((*stack_a)->index == 0)
			pb(stack_a, stack_b, true);
	}
	if (!nums_ordered(stack_a))
		sort_three(stack_a);
	pa(stack_a, stack_b, true);
}

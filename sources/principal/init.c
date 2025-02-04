/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:09:54 by smarquez          #+#    #+#             */
/*   Updated: 2025/02/04 10:56:19 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_push_swap(t_list **stack_a, t_list **stack_b)
{
	int	nums;

	nums = ft_lstsize(*stack_a);
	get_index(stack_a);
	if (!nums_ordered(stack_a))
	{
		if (nums == 2)
			sa(stack_a, true);
		else if (nums == 3)
			sort_three(stack_a);
		else if (nums == 4)
			sort_four(stack_a, stack_b, nums);
		else if (nums == 5)
			sort_five(stack_a, stack_b, nums);
		else
			k_sort(stack_a, stack_b, nums);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:26:16 by smarquez          #+#    #+#             */
/*   Updated: 2025/01/08 17:08:27 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_five(t_list **stack_a, t_list **stack_b, int digits)
{
    while (ft_lstsize(*stack_a) > 3)
    {
        if ((*stack_a)->index != 0 && (*stack_a)->index != 1)
        {
            if ((count_index_position(stack_a, 0) <= (digits / 2)) || (count_index_position(stack_a, 1) <= (digits / 2)))
                ra(stack_a);
            else
                rra(stack_a);
        }
        if (((*stack_a)->index == 0) || ((*stack_a)->index == 1))
            pb(stack_a, stack_b);
    }
    if (!nums_ordered(stack_a))
        sort_three(stack_a);
    if (nums_ordered(stack_a))
        sb(stack_b);
    pa(stack_b, stack_a);
    pa(stack_b, stack_a);
}

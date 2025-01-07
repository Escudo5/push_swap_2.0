/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escudo5 <escudo5@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:18:52 by smarquez          #+#    #+#             */
/*   Updated: 2024/11/29 12:36:23 by escudo5          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrr(t_stack_node **a, t_stack_node **b, bool print)
{
	rra(a, false);
	rrb(b, false);
	if (print)
		ft_putstr_fd("rrr\n", 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:18:52 by smarquez          #+#    #+#             */
/*   Updated: 2025/02/04 10:57:29 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_list **a, t_list **b, bool print)
{
	rra(a, true);
	rrb(b, true);
	if (print == true)
		ft_putstr_fd("rrr\n", 1);
}

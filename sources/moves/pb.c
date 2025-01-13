/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:15:13 by smarquez          #+#    #+#             */
/*   Updated: 2025/01/13 18:24:26 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_list **a, t_list **b)
{
	t_list	*node;

	if (*a == NULL)
		return ;
	node = *a;
	*a = (*a)->next;
	if (*a)
		(*a)->prev = NULL;
	node->next = *b;
	if (*b)
		(*b)->prev = node;
	*b = node;
	node->prev = NULL;
	ft_putstr_fd("pb\n", 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:46:12 by smarquez          #+#    #+#             */
/*   Updated: 2025/02/04 10:51:22 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **a, bool print)
{
	t_list	*node1;
	t_list	*node2;

	if (*a == NULL || (*a)->next == NULL)
		return ;
	node1 = *a;
	node2 = (*a)->next;
	node1->next = node2->next;
	if (node2->next != NULL)
		node2->next->prev = node1;
	node2->prev = node1->prev;
	node2->next = node1;
	node1->prev = node2;
	*a = node2;
	if (print == true)
		ft_putstr_fd("sa\n", 1);
}

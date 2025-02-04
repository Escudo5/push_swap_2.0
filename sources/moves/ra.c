/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:30:26 by smarquez          #+#    #+#             */
/*   Updated: 2025/02/04 10:50:44 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **a, bool print)
{
	t_list	*first;
	t_list	*last;

	if (*a == NULL || (*a)->next == NULL)
		return ;
	first = *a;
	*a = (*a)->next;
	(*a)->prev = NULL;
	last = *a;
	while (last->next != NULL)
		last = last->next;
	last->next = first;
	first->prev = last;
	first->next = NULL;
	if (print == true)
		ft_putstr_fd("ra\n", 1);
}

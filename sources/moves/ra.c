/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escudo5 <escudo5@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:30:26 by smarquez          #+#    #+#             */
/*   Updated: 2024/11/29 12:36:12 by escudo5          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_stack_node **a, bool print)
{
	t_stack_node	*first;
	t_stack_node	*last;

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
	if (print)
        ft_putstr_fd("ra\n", 1);
}

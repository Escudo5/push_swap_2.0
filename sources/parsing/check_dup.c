/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:48:51 by smarquez          #+#    #+#             */
/*   Updated: 2025/01/14 11:24:48 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_dup(t_list *stack_a)
{
	t_list	*now;
	t_list	*comparison;
	int		now_number;
	int		comparison_number;

	now = stack_a;
	while (now != NULL && now->next != NULL)
	{
		comparison = now->next;
		now_number = *((int *)now->content);
		while (comparison != NULL)
		{
			comparison_number = *((int *)comparison->content);
			if (now_number == comparison_number)
				print_error(&stack_a);
			comparison = comparison->next;
		}
		now = now->next;
	}
}

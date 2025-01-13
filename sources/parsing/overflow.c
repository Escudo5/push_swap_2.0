/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   overflow.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:08:05 by smarquez          #+#    #+#             */
/*   Updated: 2025/01/13 18:07:35 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_length(char *numbers)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (numbers[i] == '-' || numbers[i] == '+')
		i++;
	while (numbers[i] == '0')
		i++;
	while (numbers[i])
	{
		i++;
		count++;
	}
	if (count >= 11)
		return (1);
	return (0);
}

int	check_overflow(char *numbers)
{
	if (check_length(numbers))
		return (1);
	else if (ft_atoi(numbers) != ft_atol(numbers))
		return (1);
	return (0);
}
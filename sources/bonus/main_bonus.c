/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 10:26:52 by smarquez          #+#    #+#             */
/*   Updated: 2025/02/10 12:15:15 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_checker(t_list **stack_a, t_list **stack_b)
{
	char	*line;

	line = get_next_line(0);
	while (line)
	{
		moves_check(stack_a, stack_b, line);
		free(line);
		line = get_next_line(0);
	}
	free(line);
	if (nums_ordered(stack_a))
		ft_printf("OK\n");
	else if (ft_lstsize(*stack_a) == 1)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		i;
	char	**number;

	number = NULL;
	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (0);
	i = 1;
	while (argv[i] != NULL)
	{
		number = ft_split(argv[i], ' ');
		check_input(number, &stack_a);
		check_digits(number, &stack_a);
		insert_numbers(number, &stack_a);
		free_array(number);
		i++;
	}
	check_dup(stack_a);
	get_index(&stack_a);
	ft_checker(&stack_a, &stack_b);
	ft_lstclear(&stack_a, free);
	return (0);
}

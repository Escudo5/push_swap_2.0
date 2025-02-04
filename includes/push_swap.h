/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:27:41 by smarquez          #+#    #+#             */
/*   Updated: 2025/02/04 11:30:06 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "printf.h"
# include <limits.h>
# include <stdbool.h>

/*
void	init_stack_a(t_list **a, int *numbers,
							int len);
 void				append_node(t_list **a, int n);
t_list	*find_last(t_list *a);
long	ft_atol(const char *nptr);
char	**split_input(int argc, char **argv, int *len);
bool	is_valid(char *str);
bool	has_dup(int *numbers, int len);
int		*create_number_array(char **input, int len);
void	check_dup(t_list **stack_a);
int		get_len(t_list **a);
bool	is_numeric(const char *str);
bool	is_dup(int *numbers, int len);
bool	is_in_range(int index, int start, int end);
bool	is_in_range_str(const char *str);
void	sort_stacks(t_list **a, t_list **b);
void	free_array(char **array);
*/

//// algorithms
void	k_sort(t_list **stack_a, t_list **stack_b, int number);
int		count_max_rotations(t_list *stack, int max_index);
void	const_sort_to_b(t_list **stack_a, t_list **stack_b, int number);
void	sort_five(t_list **stack_a, t_list **stack_b, int digits);
void	sort_four(t_list **stack_a, t_list **stack_b, int digits);
void	order_numbers(t_list **stack_a, int first, int second, int third);
void	sort_three(t_list **stack_a);

// moves
void	sa(t_list **a, bool print);
void	sb(t_list **b, bool print);
void	pa(t_list **a, t_list **b, bool print);
void	pb(t_list **a, t_list **b, bool print);
void	ss(t_list **a, t_list **b, bool print);
void	ra(t_list **a, bool print);
void	rb(t_list **b, bool print);
void	rr(t_list **a, t_list **b, bool print);
void	rra(t_list **a, bool print);
void	rrb(t_list **b, bool print);
void	rrr(t_list **a, t_list **b, bool print);

/* @param a
void	index_n(t_list **a);
bool	unindexed(t_list *a);
t_list	*find_smallest_unindexed(t_list *a);
int		find_largest_index(t_list *b);
void	move_largest_to_top(t_list **b,
							int largest_index);
void	push_to_a(t_list **a, t_list **b);
bool	stack_sorted(t_list *stack);
void	free_stack(t_list **a);
void	sort_three(t_list **a);
t_list	*find_max(t_list *a);
int		ft_stacksize(t_list *stack);
*/

// parse
void	check_digits(char **argv, t_list **stack_a);
void	check_dup(t_list *stack_a);
int		check_length(char *numbers);
int		check_overflow(char *numbers);
void	check_input(char **argv, t_list **stack_a);
int		check_num_array(char **nums);
void	insert_numbers(char **nums, t_list **stack_a);
void	split_parse(char **argv, t_list **stack_a);
void	parse(char **argv, t_list **stack_a);
void	print_error(t_list **stack_a);
void	*free_array(char **array);

// principal
int		nums_ordered(t_list **stack);
void	get_index(t_list **stack);
int		count_index_position(t_list **stack, int index);
void	init_push_swap(t_list **stack_a, t_list **stack_b);
int		main(int argc, char **argv);

// bonus
void	moves_check(t_list **stack_a, t_list **stack_b, char *line);
// int main(int argc, char **argv);

#endif
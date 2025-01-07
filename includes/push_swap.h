/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:27:41 by smarquez          #+#    #+#             */
/*   Updated: 2025/01/07 14:52:41 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <limits.h>
# include <stdbool.h>

typedef struct s_stack_node
{
	int					nbr;
	int					index;
/* 	int					push_cost;
	bool				above_median; */
	bool				cheapest;
	struct s_stack_node	*target_node;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}						t_stack_node;

void					init_stack_a(t_stack_node **a, int *numbers,
							int len);
 void				append_node(t_stack_node **a, int n);
t_stack_node			*find_last(t_stack_node *a);
long				ft_atol(const char *nptr);
char					**split_input(int argc, char **argv, int *len);
bool					is_valid(char *str);
bool					has_dup(int *numbers, int len);
int						*create_number_array(char **input, int len);
void check_dup(t_list **stack_a);
int						get_len(t_stack_node **a);
bool					is_numeric(const char *str);
bool					is_dup(int *numbers, int len);
bool					is_in_range(int index, int start, int end);
bool					is_in_range_str(const char *str);
void					sort_stacks(t_stack_node **a, t_stack_node **b);
void					free_array(char **array);
void					sa(t_stack_node **a);
void					sb(t_stack_node **b);
void					pa(t_stack_node **a, t_stack_node **b);
void					pb(t_stack_node **a, t_stack_node **b);
void					ss(t_stack_node **a, t_stack_node **b);
void					ra(t_stack_node **a);
void					rb(t_stack_node **b);
void					rr(t_stack_node **a, t_stack_node **b);
void					rra(t_stack_node **a);
void					rrb(t_stack_node **b);
void					rrr(t_stack_node **a, t_stack_node **b);
void					index_n(t_stack_node **a);
bool					unindexed(t_stack_node *a);
t_stack_node			*find_smallest_unindexed(t_stack_node *a);
int						find_largest_index(t_stack_node *b);
void					move_largest_to_top(t_stack_node **b,
							int largest_index);
void					push_to_a(t_stack_node **a, t_stack_node **b);
bool					stack_sorted(t_stack_node *stack);
void					free_stack(t_stack_node **a);
void					sort_three(t_stack_node **a);
t_stack_node			*find_max(t_stack_node *a);
int 					ft_stacksize(t_stack_node *stack);



//parse 
void check_digits(char **argv, t_list **stack_a);
void check_dup(t_list **stack_a);
int check_length(char *numbers);
int check_overflow(char *numbers);
void check_input(char **argv, t_list **stack_a);
int check_num_array(char **nums);
void insert_numbers(char **nums, t_list **stack_a);
void split_parse(char **argv, t_list **stack_a);
void parse(char **argv, t_list **stack_a);
void print_error(t_list **stack_a);
void free_array(char **array);

// principal
int nums_ordered(t_list **stack);
void get_index(t_list **stack);
int count_index_position(t_list **stack, int index);
void init_push_swap(t_list **stack_a, t_list **stack_b);











#endif
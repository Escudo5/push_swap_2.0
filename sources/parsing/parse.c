/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:25:58 by smarquez          #+#    #+#             */
/*   Updated: 2025/01/13 16:19:32 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include<stdio.h>

void check_input(char **argv, t_list **stack_a)
{
    int i;
    int j;
    
    i = 1;
    j = 0;
    while(argv[i] != NULL)
    {
        if (argv[i][0] == '\0')
        {
            print_error(stack_a);
            printf("caca1");
        }
        while(argv[i][j] != '\0')
        {
            if (!(ft_isdigit(argv[i][j])) && (argv[i][j] != ' ') && (argv[i][j] != '-') && (argv[i][j] != '+'))
            {
                print_error(stack_a);
                printf("caca_digit");
            }
            j++;
        }
        j = 0;
        i++;
    }
}

int check_num_array(char **nums)
{
    int i;
    int j;
    
    i = 0;
    j = 0;
    while (nums[i]!= NULL)
    {
        while (nums[i][j] != '\0')
        {
            if (!(ft_isdigit(nums[i][j + 1])) && (nums[i][j + 1] != '\0'))
                return(1);
            j++;
        }
        j = 0;
        if (check_overflow(nums[i]))
            return(1);
        i++;
    }
    return(0);
}

void insert_numbers(char **nums, t_list **stack_a)
{
    int i;
    int *num;
    t_list *node;
    
    i = 0;
    while (nums[i] != NULL)
    {
        num = malloc(sizeof(int));
        *num = ft_atoi(nums[i]);
        node = ft_lstnew(num);
        if (!node)
        {
            ft_lstclear(stack_a, free);
            free_array(nums);
            free(nums);
            print_error(stack_a);
            printf("insert_numbers");
        }
        ft_lstadd_back(stack_a, node);
        i++;
    }
}

void split_parse(char **argv, t_list **stack_a)
{
    int i;
    char **nums;

    i = 1;
    nums = NULL;
    while (argv[i] != NULL)
    {
        nums = ft_split(argv[i], ' ');
        if (check_num_array(nums))
        {
            free_array(nums);
            print_error(stack_a);
            printf("split");
        }
        else
        {
            insert_numbers(nums, stack_a);
            free_array(nums);
        }
        i++;
    }
}

void parse(char **argv, t_list **stack_a)
{
    check_input(argv, stack_a);
    check_digits(argv, stack_a);
    split_parse(argv, stack_a);
    check_dup(*stack_a);
}

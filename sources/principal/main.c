/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:53:13 by smarquez          #+#    #+#             */
/*   Updated: 2025/01/07 14:55:19 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    t_list *stack_a;
    t_list *stack_b;

    stack_a = NULL;
    stack_b = NULL;
    if(argc >= 2)
        parse(argv, &stack_a);
    else
        return(0);
    init_push_swap(&stack_a, &stack_b);
    ft_lstclear(stack_a, free);
    return(0);
}
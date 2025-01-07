/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:21:03 by smarquez          #+#    #+#             */
/*   Updated: 2025/01/07 14:29:23 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int nums_ordered(t_list **stack)
{
    t_list *current;

    current = *stack;
    while (current && current->next)
    {
        if (*((int*)current->content) > *((int*)current->next->content))
            return(0);
        current = current->next;
    }
    return(1);
}


void get_index(t_list **stack)
{
    t_list *current;
    t_list *temp;
    size_t count;

    current = *stack;
    while (current != NULL)
    {
        count = 0;
        temp = *stack;
        while (temp != NULL)
        {
            if (*(int*)current->content > *(int*)temp->content)
                count++;
            temp = temp->next;
        }
        current->index = count;
        current = current->next;
    }
}


int count_index_position(t_list **stack, int index)
{
    int count;
    t_list *first;
    count = 1;
    first = *stack;
    while (first != NULL && first->index != index)
    {
        count++;
        first = first->next;
    }
    return(count);
}
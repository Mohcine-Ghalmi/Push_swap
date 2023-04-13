/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting3AndLess.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 16:18:29 by mghalmi           #+#    #+#             */
/*   Updated: 2023/04/13 20:20:03 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sorting2(t_list *stackA)
{
    long    first;
    long    second;

    first = stackA->content;
    second = stackA->next->content;
    if (first > second)
        swaping(stackA, 'a');
}

void    sorting3AndLess(t_list *stackA)
{
    long last;
    long first;
    long middle;

    if (ft_lstsize(stackA) == 2)
        sorting2(stackA);
    last = stackA->next->next->content;
    middle = stackA->next->content;
    first = stackA->content;
    if (last > first && last > middle && first > middle)
        swaping(stackA, 'a');       
    if (first > middle && first > last && middle < last)
        rotate(&stackA, 'a');
    if (first > middle && first > last && middle > last)
    {
        swaping(stackA, 'a');       
        reverseRotate(&stackA, 'a');
    }
    if (middle > first && middle > last && last > first)
    {
        swaping(stackA, 'a');
        rotate(&stackA, 'a');
    }
    if (middle > first && middle > last && first > last)
        reverseRotate(&stackA, 'a');
}
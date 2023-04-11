/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 16:00:23 by mghalmi           #+#    #+#             */
/*   Updated: 2023/04/11 16:01:53 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    indexStack(t_list **stack)
{
    t_list  *tmp1;
    t_list  *tmp2;
    long    value;
    int     index;

    index = 0;
    tmp1 = *stack;
    while (tmp1)
    {
        tmp2 = *stack;
        value = tmp1->content;
        index = 0;
        while (tmp2)
        {
            if (value > tmp2->content)
                index++;
            tmp2 = tmp2->next;
        }
        tmp1->pos = index;
        tmp1 = tmp1->next;
    }
}

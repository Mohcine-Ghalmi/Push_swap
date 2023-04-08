/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting45.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:43:12 by mghalmi           #+#    #+#             */
/*   Updated: 2023/04/06 21:41:46 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void    minOnTop(t_list **stack)
{
    t_list  *tmp;
    int    minPos;
    long    minCont;

    tmp = *stack;
    minPos = tmp->pos;
    minCont = tmp->content;
    tmp = tmp->next;
    while (tmp)
    {
        if (minCont > tmp->content)
        {
            minPos = tmp->pos;
            minCont = tmp->content;
        }
        tmp = tmp->next;
    }
    if (minPos > ft_lstsize(*stack) / 2)
        while (ft_lstsize(*stack) - minPos++)
            reverseRotate(*stack, 'a');
    if (minPos <= ft_lstsize(*stack) / 2)
        while (minPos--)
            rotate(*stack, 'a');
}

void    sorting5AndLess(t_list **stackA, t_list **stackB)
{
    minOnTop(stackA);
    pushingToB(stackA, stackB);
    if (ft_lstsize(*stackA) == 4)
    {
        minOnTop(stackA);
        pushingToB(stackA, stackB);
    }
    sorting3(*stackA);
    pushingToA(stackB, stackA);
    if (ft_lstsize(*stackB))
        pushingToA(stackB, stackA);   
}

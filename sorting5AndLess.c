/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting5AndLess.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:43:12 by mghalmi           #+#    #+#             */
/*   Updated: 2023/04/12 15:29:04 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

int findMin(t_list *stack, long toFind)
{
    int count;

    count = 0;
    while (stack)
    {
        if (stack->content == toFind)
            break;
        stack = stack->next;
        count++;
    }
    return (count);
}

void    minOnTop(t_list **stack)
{
    t_list  *tmp;
    int    minPos;
    long    minCont;

    tmp = *stack;
    minCont = tmp->content;
    tmp = tmp->next;
    while (tmp)
    {
        if (minCont > tmp->content)
            minCont = tmp->content;
        tmp = tmp->next;
    }
    minPos = findMin(*stack, minCont);
    if (minPos > ft_lstsize(*stack) / 2)
        while (ft_lstsize(*stack) - minPos++)
            reverseRotate(stack, 'a');
    else
        while (minPos--)
            rotate(stack, 'a');
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
    sorting3AndLess(*stackA);
    pushingToA(stackB, stackA);
    if (ft_lstsize(*stackB))
        pushingToA(stackB, stackA);   
}

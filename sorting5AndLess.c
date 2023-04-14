/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting5AndLess.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:43:12 by mghalmi           #+#    #+#             */
/*   Updated: 2023/04/14 20:02:31 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	findmin(t_list *stack, long toFind)
{
	int	count;

	count = 0;
	while (stack)
	{
		if (stack->content == toFind)
			break ;
		stack = stack->next;
		count++;
	}
	return (count);
}

void	minontop(t_list **stack)
{
	t_list	*tmp;
	int		minpos;
	long	mincont;

	tmp = *stack;
	mincont = tmp->content;
	tmp = tmp->next;
	while (tmp)
	{
		if (mincont > tmp->content)
			mincont = tmp->content;
		tmp = tmp->next;
	}
	minpos = findmin(*stack, mincont);
	if (minpos > ft_lstsize(*stack) / 2)
		while (ft_lstsize(*stack) - minpos++)
			reverserotate(stack, 'a');
	else
		while (minpos--)
			rotate(stack, 'a');
}

void	sorting5andless(t_list **stackA, t_list **stackB)
{
	minontop(stackA);
	pushingtob(stackA, stackB);
	if (ft_lstsize(*stackA) == 4)
	{
		minontop(stackA);
		pushingtob(stackA, stackB);
	}
	sorting3andless(*stackA);
	pushingtoa(stackB, stackA);
	if (ft_lstsize(*stackB))
		pushingtoa(stackB, stackA);
}

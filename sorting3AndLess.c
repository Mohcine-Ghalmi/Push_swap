/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting3AndLess.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleeps <sleeps@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 16:18:29 by mghalmi           #+#    #+#             */
/*   Updated: 2023/04/18 20:59:04 by sleeps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting2(t_list *stackA)
{
	long	first;
	long	second;

	first = stackA->content;
	second = stackA->next->content;
	if (first > second)
		swaping(stackA, 'a');
	exit(0);
}

void	sorting3andless(t_list *stackA)
{
	long	last;
	long	first;
	long	middle;

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
		reverserotate(&stackA, 'a');
	}
	if (middle > first && middle > last && last > first)
	{
		swaping(stackA, 'a');
		rotate(&stackA, 'a');
	}
	if (middle > first && middle > last && first > last)
		reverserotate(&stackA, 'a');
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   justSort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleeps <sleeps@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:55:15 by mghalmi           #+#    #+#             */
/*   Updated: 2023/04/14 03:09:17 by sleeps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    justSort(t_list **stackA, t_list **stackB, int chunk)
{
	int add;
	
	add = chunk;
	while (*stackA)
	{
		if ((*stackA)->pos >= chunk)
			rotate(stackA, 'a');
		else
		{
			if ((*stackA)->pos >= (chunk - (add / 2)))
			{
				pushingToB(stackA, stackB);
				rotate(stackB, 'b');
			}
			else
				pushingToB(stackA, stackB);
		}
		if (ft_lstsize(*stackB) == chunk)
			chunk += add;
	}
}

int findPos(t_list *stack, int nums)
{
	int count;
	t_list *tmp;
	
	count = 0;
	tmp = stack;
	while (tmp)
	{
		if (tmp->content == nums)
			break;
		tmp = tmp->next;
		count++;
	}
	return (count);
}

int maxvalue(t_list	*stack, long *preMax)
{
	t_list	*tmp;
	long 	max;

	tmp = stack;
	max = tmp->content;
	*preMax = tmp->content;
	while (tmp)
	{
		if (tmp->content > max)
			max = tmp->content;
		tmp = tmp->next;
	}
	tmp = stack;
	while (tmp)
	{
		if (tmp->content != max && tmp->content > *preMax)
			*preMax = tmp->content;
		tmp = tmp->next;
	}
	return (max);
}

void	pushMaxA(t_list **stackA, t_list **stackB, long pos1, int pos2, long value)
{
	if (pos2 > ft_lstsize(*stackB) / 2)
	{
		while (ft_lstsize(*stackB) - pos2++)
			reverseRotate(stackB, 'b');
	}
	else
		while (pos2--)
			rotate(stackB, 'b');
	pushingToA(stackB, stackA);
	pos1 = findPos(*stackB, value);
	if (pos1 > ft_lstsize(*stackB) / 2)
		while (ft_lstsize(*stackB) - pos1++)
			reverseRotate(stackB, 'b');
	else
		while (pos1--)
			rotate(stackB, 'b');
	pushingToA(stackB, stackA);
}

void    justSortchunks(t_list **stackA, t_list **stackB, int chunk)
{
	long premax;
	long premaxValue;
	int max;
	long maxValue;

	justSort(stackA, stackB, ft_lstsize(*stackA) / chunk);
	while(*stackB)
	{
		premaxValue = 0;
		maxValue = maxvalue(*stackB, &premaxValue);
		max = findPos(*stackB, maxValue);
		premax = findPos(*stackB, premaxValue);
		if (premax < max)
			pushMaxA(stackA, stackB, premax, max, premaxValue);
		else
			pushMaxA(stackA, stackB, max, premax, maxValue);
		sorting2(*stackA);
	}
}

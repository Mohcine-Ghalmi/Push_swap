/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   justSort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:55:15 by mghalmi           #+#    #+#             */
/*   Updated: 2023/04/14 17:45:21 by mghalmi          ###   ########.fr       */
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
			if ((*stackA)->pos > (chunk - (add / 2)))
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

int    instraction_number(int len, int pos)
{
    if (pos < (len / 2))
        return (pos);
    return (len - pos);
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


void	pushMaxA(t_list **stackA, t_list **stackB, long value1, int value2)
{
	int yes;

	yes = 0;
	if (value1 == value2)
		yes = 1;
	value2 = findPos(*stackB, value2);
	if (value2 > ft_lstsize(*stackB) / 2)
	{
		while (ft_lstsize(*stackB) - value2++)
			reverseRotate(stackB, 'b');
	}
	else
		while (value2--)
			rotate(stackB, 'b');
	pushingToA(stackB, stackA);
	value1 = findPos(*stackB, value1);
	if (yes == 0)
	{
		if (value1 > ft_lstsize(*stackB) / 2)
			while (ft_lstsize(*stackB) - value1++)
				reverseRotate(stackB, 'b');
		else
			while (value1--)
				rotate(stackB, 'b');
		pushingToA(stackB, stackA);
		sorting2(*stackA);
	}
}

void    justSortchunks(t_list **stackA, t_list **stackB, int chunk)
{
	long premaxInstra;
	long premaxValue;
	int maxInstra;
	long maxValue;

	justSort(stackA, stackB, ft_lstsize(*stackA) / chunk);
	while(*stackB)
	{
		premaxValue = 0;
		maxValue = maxvalue(*stackB, &premaxValue);
		maxInstra = instraction_number(ft_lstsize(*stackB), findPos(*stackB, maxValue));
		premaxInstra = instraction_number(ft_lstsize(*stackB), findPos(*stackB, premaxValue));
		if (premaxInstra < maxInstra)
			pushMaxA(stackA, stackB, maxValue, premaxValue);
		else
			pushMaxA(stackA, stackB, premaxValue, maxValue);
	}
}

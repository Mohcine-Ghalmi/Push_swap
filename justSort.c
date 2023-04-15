/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   justSort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:55:15 by mghalmi           #+#    #+#             */
/*   Updated: 2023/04/15 22:16:13 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	justsort(t_list **stackA, t_list **stackB, int chunk, int size)
{
	int	add;

	add = chunk;
	while (*stackA)
	{
		if ((*stackA)->pos >= chunk)
			rotate(stackA, 'a');
		else
		{
			if ((*stackA)->pos > (chunk - (add / 2)))
			{
				pushingtob(stackA, stackB);
				if (size > 5 && (*stackA)->pos >= chunk)
					rr((stackA), (stackB));
				else
					rotate(stackB, 'b');
			}
			else
				pushingtob(stackA, stackB);
		}
		if (ft_lstsize(*stackB) == chunk)
			chunk += add;
	}
}

int	findpos(t_list *stack, int nums)
{
	int		count;
	t_list	*tmp;

	count = 0;
	tmp = stack;
	while (tmp)
	{
		if (tmp->content == nums)
			break ;
		tmp = tmp->next;
		count++;
	}
	return (count);
}

int	maxval(t_list	*stack, long *preMax)
{
	t_list	*tmp;
	long	max;

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

void	pushmaxa(t_list **stackA, t_list **stackB, long value1, int value2)
{
	int	yes;

	yes = 0;
	if (value1 == value2)
		yes = 1;
	value2 = findpos(*stackB, value2);
	if (value2 > ft_lstsize(*stackB) / 2)
	{
		while (ft_lstsize(*stackB) - value2++)
			reverserotate(stackB, 'b');
	}
	else
		while (value2--)
			rotate(stackB, 'b');
	pushingtoa(stackB, stackA);
	value1 = findpos(*stackB, value1);
	if (yes == 0)
		ifpushing(value1, stackB, stackA);
}

void	justsortchunks(t_list **stackA, t_list **stackB, int chunk, int size)
{
	long	premaxinstra;
	long	premaxvalue;
	int		maxinstra;
	long	maxvalue;

	justsort(stackA, stackB, ft_lstsize(*stackA) / chunk, size);
	while (*stackB)
	{
		premaxvalue = 0;
		maxvalue = maxval(*stackB, &premaxvalue);
		maxinstra = instra(*stackB, findpos(*stackB, maxvalue));
		premaxinstra = instra(*stackB, findpos(*stackB, premaxvalue));
		if (premaxinstra < maxinstra)
			pushmaxa(stackA, stackB, maxvalue, premaxvalue);
		else
			pushmaxa(stackA, stackB, premaxvalue, maxvalue);
	}
}

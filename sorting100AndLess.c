/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting100AndLess.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 00:18:34 by mghalmi           #+#    #+#             */
/*   Updated: 2023/04/13 23:40:02 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

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

int maxPos(t_list	*stack, long *preMax)
{
	int count;
	t_list	*tmp;
	long 	max;

	tmp = stack;
	count = 0;
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
	printf("max value == %ld || premax value == %ld\n", max, *preMax);
	max = findPos(stack, max);
	*preMax = findPos(stack, *preMax);
	printf("max pos == %ld || premax pos == %ld\n", max, *preMax);
	return (max);
}

void	pushMaxA(t_list **stackA, t_list **stackB, long pos1, int pos2)
{
	if (pos2 > ft_lstsize(*stackB) / 2)
	{
		while ((ft_lstsize(*stackB) - pos2++))
			reverseRotate(stackB, 'b');
	}
	else
		while (pos2-- != 0)
			rotate(stackB, 'b');
	pushingToA(stackB, stackA);
	if (pos1 > ft_lstsize(*stackB) / 2)
		while ((ft_lstsize(*stackB) - pos1++))
			reverseRotate(stackB, 'b');
	else
		while (pos1-- != 0)
			rotate(stackB, 'b');
	printf("2 - what get pushed == %ld\n", (*stackB)->content);
	pushingToA(stackB, stackA);
	if (pos1 < pos2)
			swaping(*stackA, 'a');
}

void    sorting100AndLess(t_list **stackA, t_list **stackB)
{
	int chunk;
	long premax;
	int max;
	t_list *tmp;

	chunk = ft_lstsize(*stackA) / 5;
	justSort(stackA, stackB, chunk);
	tmp = *stackB;
	puts("-----------------------stackB-----------------------");
	while (tmp)
	{
		printf("value = %ld || pos = %d\n", tmp->content, tmp->pos);
		tmp = tmp->next;
	}
	puts("-----------------------------------------------------");

	while(*stackB)
	{
		premax = 0;
		max = maxPos(*stackB, &premax);
		if (premax > max)
			pushMaxA(stackA, stackB, premax, max);
		else
			pushMaxA(stackA, stackB, max, premax);
		sorting2(*stackA);
		
		tmp = *stackA;
		puts("--------------------------------------------------");
		while (tmp)
		{
			printf("value = %ld || pos = %d\n", tmp->content, tmp->pos);
			tmp = tmp->next;
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 16:00:23 by mghalmi           #+#    #+#             */
/*   Updated: 2023/04/14 20:04:30 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	instra(t_list *stack, int pos)
{
	if (pos < (ft_lstsize(stack) / 2))
		return (pos);
	return ((ft_lstsize(stack)) - pos);
}

void	ifpushing(long value1, t_list **stackB, t_list **stackA)
{
	if (value1 > ft_lstsize(*stackB) / 2)
		while (ft_lstsize(*stackB) - value1++)
			reverserotate(stackB, 'b');
	else
		while (value1--)
			rotate(stackB, 'b');
	pushingtoa(stackB, stackA);
	sorting2(*stackA);
}

void	indexstack(t_list **stack)
{
	t_list	*tmp1;
	t_list	*tmp2;
	long	value;
	int		index;

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

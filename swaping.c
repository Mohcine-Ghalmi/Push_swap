/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaping.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleeps <sleeps@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:04:44 by mghalmi           #+#    #+#             */
/*   Updated: 2023/04/18 21:06:58 by sleeps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swaping(t_list *stack, int stackAlpha)
{
	long	tmp;
	int		pos;

	if (!stack->next)
		return ;
	tmp = stack->content;
	pos = stack->pos;
	stack->content = stack->next->content;
	stack->pos = stack->next->pos;
	stack->next->content = tmp;
	stack->next->pos = pos;
	if (stackAlpha != 0)
		ft_printf("s%c\n", stackAlpha);
}

void	ss(t_list *stackA, t_list *stackB)
{
	if (!stackA->next || !stackB->next)
		return ;
	swaping(stackA, 0);
	swaping(stackB, 0);
	ft_printf("ss\n");
}

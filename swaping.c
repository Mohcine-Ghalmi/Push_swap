/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaping.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:04:44 by mghalmi           #+#    #+#             */
/*   Updated: 2023/04/11 16:05:39 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	swaping(t_list *stack, int stackAlpha)
{
	long	tmp;

	if (!stack)
		exit(1);
	tmp = stack->content;
	stack->content = stack->next->content;
	stack->next->content = tmp;
	indexStack(&stack);
	if (stackAlpha != 0)
		ft_printf("s%c\n", stackAlpha);
}

void	ss(t_list *stackA, t_list *stackB)
{
	swaping(stackA, 0);
	swaping(stackB, 0);
	ft_printf("ss\n");
}

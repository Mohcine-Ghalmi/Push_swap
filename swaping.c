/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaping.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:04:44 by mghalmi           #+#    #+#             */
/*   Updated: 2023/03/28 17:34:28 by mghalmi          ###   ########.fr       */
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
	ft_printf("s%c\n", stackAlpha);
}

void	ss(t_list *stackA, t_list *stackB)
{
	swaping(stackA, 'a');
	swaping(stackB, 'b');
}

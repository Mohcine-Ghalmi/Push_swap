/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 15:14:57 by mghalmi           #+#    #+#             */
/*   Updated: 2023/04/16 17:07:09 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list **stack, int stackApha)
{
	long	head;
	int		headindex;
	t_list	*tmp;

	if (!(*stack)->next)
		return ;
	head = (*stack)->content;
	headindex = (*stack)->pos;
	tmp = *stack;
	while (tmp)
	{
		if (tmp->next == NULL)
		{
			tmp->content = head;
			tmp->pos = headindex;
			break ;
		}
		tmp->content = tmp->next->content;
		tmp->pos = tmp->next->pos;
		tmp = tmp->next;
	}
	if (stackApha != 0)
		ft_printf("r%c\n", stackApha);
}

void	rr(t_list **stackA, t_list **stackB)
{
	if (!((*stackA)->next) || !((*stackB)->next))
		return ;
	rotate(stackA, 0);
	rotate(stackB, 0);
	ft_printf("rr\n");
}

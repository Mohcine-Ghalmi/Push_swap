/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 15:14:57 by mghalmi           #+#    #+#             */
/*   Updated: 2023/04/14 19:55:01 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list **stack, int stackApha)
{
	long	head;
	int		headindex;
	t_list	*tmp;

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

void	rr(t_list *stackA, t_list *stackB)
{
	rotate(&stackA, 0);
	rotate(&stackB, 0);
	ft_printf("rr\n");
}

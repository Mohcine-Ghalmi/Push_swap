/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 15:14:57 by mghalmi           #+#    #+#             */
/*   Updated: 2023/04/11 16:04:03 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	rotate(t_list *stack, int stackApha)
{
	long	head;
	t_list	*tmp;
	
	head = stack->content;
	tmp = stack;
	while (tmp)
	{
		if (tmp->next == NULL)
		{
			tmp->content = head;
			break;
		}
		tmp->content = tmp->next->content;
		tmp = tmp->next;
	}
	indexStack(&stack);
	if (stackApha != 0)
		ft_printf("r%c\n", stackApha);
}

void	rr(t_list *stackA, t_list *stackB)
{
	rotate(stackA, 0);
	rotate(stackB, 0);
	ft_printf("rr\n");
}

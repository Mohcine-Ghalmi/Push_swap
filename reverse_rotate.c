/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 16:54:17 by mghalmi           #+#    #+#             */
/*   Updated: 2023/04/04 23:06:22 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    reverseRotate(t_list *stack, int stackAlpha)
{
	t_list	*tmp;
	long	*nbr;
	int		i;

	i = 0;
	tmp = stack;
	nbr = malloc(sizeof(long) * ft_lstsize(stack));
	while (tmp)
	{
		nbr[i++] = tmp->content;
		tmp = tmp->next; 
	}
	tmp = stack;
	tmp->content = ft_lstlast(stack)->content;
	tmp = tmp->next;
	i = 0;
	while (i < ft_lstsize(stack) - 1)
	{
		tmp->content = nbr[i++];
		tmp = tmp->next;
	}
	if (stackAlpha != 0)
		ft_printf("rr%c\n", stackAlpha);
	free(nbr);
}

void	rrr(t_list *stackA, t_list *stackB)
{
	reverseRotate(stackA, 0);
	reverseRotate(stackB, 0);
	ft_printf("rrr");
}
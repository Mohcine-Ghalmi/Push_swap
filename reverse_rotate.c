/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 16:54:17 by mghalmi           #+#    #+#             */
/*   Updated: 2023/04/14 21:49:14 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*give(t_list *tmp, t_list **stack)
{
	tmp->content = ft_lstlast(*stack)->content;
	tmp->pos = ft_lstlast(*stack)->pos;
	tmp = tmp->next;
	return (tmp);
}

t_list	*give2(long nbr, long index, t_list *tmp)
{
	tmp->content = nbr;
	tmp->pos = index;
	tmp = tmp->next;
	return (tmp);
}

void	reverserotate(t_list **stack, int stackAlpha)
{
	t_list	*tmp;
	long	*nbr;
	long	*index;
	int		i;

	if (!(*stack))
		return ;
	i = 0;
	tmp = *stack;
	nbr = malloc(sizeof(long) * ft_lstsize(*stack));
	index = malloc(sizeof(long) * ft_lstsize(*stack));
	while (tmp)
	{
		nbr[i] = tmp->content;
		index[i++] = tmp->pos;
		tmp = tmp->next;
	}
	tmp = *stack;
	tmp = give(tmp, stack);
	i = -1;
	while (++i < ft_lstsize(*stack) - 1)
		tmp = give2(nbr[i], index[i], tmp);
	if (stackAlpha != 0)
		ft_printf("rr%c\n", stackAlpha);
	free(nbr);
	free(index);
}

void	rrr(t_list *stackA, t_list *stackB)
{
	if (!stackA || !stackB)
		return ;
	reverserotate(&stackA, 0);
	reverserotate(&stackB, 0);
	ft_printf("rrr\n");
}

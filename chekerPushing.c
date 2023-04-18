/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chekerPushing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleeps <sleeps@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 23:13:20 by mghalmi           #+#    #+#             */
/*   Updated: 2023/04/18 21:05:00 by sleeps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pushingtobcheker(t_list **sender, t_list **receiver)
{
	t_list	*tmp;
	t_list	*tmp1;

	if (!(*sender))
		return ;
	tmp = *sender;
	tmp1 = tmp->next;
	*sender = tmp1;
	ft_lstadd_front(receiver, tmp);
}

void	pushingtoacheker(t_list **sender, t_list **receiver)
{
	t_list	*tmp;
	t_list	*tmp1;

	if (!(*sender))
		return ;
	tmp = *sender;
	tmp1 = tmp->next;
	*sender = tmp1;
	ft_lstadd_front(receiver, tmp);
}

void	rrcheker(t_list **stackA, t_list **stackB)
{
	if (!((*stackA)) || !((*stackB)))
		return ;
	rotate(stackA, 0);
	rotate(stackB, 0);
}

void	rrrcheker(t_list *stackA, t_list *stackB)
{
	if (!stackA || !stackB)
		return ;
	reverserotate(&stackA, 0);
	reverserotate(&stackB, 0);
}

void	sscheker(t_list *stackA, t_list *stackB)
{
	if (!stackA || !stackB)
		return ;
	swaping(stackA, 0);
	swaping(stackB, 0);
}

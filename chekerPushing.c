/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chekerPushing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 23:13:20 by mghalmi           #+#    #+#             */
/*   Updated: 2023/04/14 23:14:23 by mghalmi          ###   ########.fr       */
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

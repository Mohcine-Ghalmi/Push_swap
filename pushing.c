/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:35:21 by mghalmi           #+#    #+#             */
/*   Updated: 2023/04/11 16:07:44 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pushingToB(t_list **sender, t_list **receiver)
{
	int i;

	i = 0;
	ft_lstadd_front(receiver, ft_lstnew((*sender)->content, 0));
	*sender = (*sender)->next;
	indexStack(sender);
	indexStack(receiver);
	printf("pb\n");
}

void	pushingToA(t_list **sender, t_list **receiver)
{
	int	i;

	i = 0;
	ft_lstadd_front(receiver, ft_lstnew((*sender)->content, (*receiver)->pos));
	(*sender) = (*sender)->next;
	indexStack(sender);
	indexStack(receiver);
	printf("pa\n");	
}

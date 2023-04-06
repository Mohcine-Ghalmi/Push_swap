/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:35:21 by mghalmi           #+#    #+#             */
/*   Updated: 2023/04/06 16:47:36 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pushingToB(t_list **sender, t_list **receiver)
{
	t_list *tmp;
	t_list *tmpRec;
	int i;

	i = 0;
	ft_lstadd_front(receiver, ft_lstnew((*sender)->content, 0));
	*sender = (*sender)->next;
	tmpRec = *receiver;
	while (tmpRec)
	{
		tmpRec->pos = i++;
		tmpRec = tmpRec->next;
	}
	tmp = *sender;
	i = 0;
	while (tmp)
	{
		tmp->pos = i++;;
		tmp = tmp->next;
	}
	printf("pb\n");
}

void	pushingToA(t_list **sender, t_list **receiver)
{
	t_list *tmp;
	int	i;

	i = 0;
	ft_lstadd_front(receiver, ft_lstnew((*sender)->content, (*receiver)->pos));
	(*sender) = (*sender)->next;
	tmp = *receiver;
	while (tmp)
	{
		tmp->pos = i++;
		tmp = tmp->next;
	}
	printf("pa\n");	
}

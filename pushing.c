/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:35:21 by mghalmi           #+#    #+#             */
/*   Updated: 2023/04/02 22:11:41 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	f(long pos)
{
	pos += 1;
}


void pushingToB(t_list **sender, t_list **receiver, int stackAlpha)
{
	ft_lstadd_front(receiver, ft_lstnew((*sender)->content, (*sender)->pos));
	*sender = (*sender)->next;
	ft_lstiter(*sender, f);
	printf("p%c\n", stackAlpha);
}

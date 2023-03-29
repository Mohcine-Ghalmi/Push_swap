/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:35:21 by mghalmi           #+#    #+#             */
/*   Updated: 2023/03/29 00:18:40 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	f(long pos)
{
	pos -= 1;
}

void	pushing(t_list *sender, t_list *receiver, int stackAlpha)
{
	ft_lstadd_front(&receiver, sender);
	ft_lstiter(sender, f);
	sender = sender->next;
	// printf("value == %ld || pos == %d", receiver->content, receiver->pos);
	ft_printf("p%c\n", stackAlpha);
}

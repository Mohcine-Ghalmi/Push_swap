/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:35:21 by mghalmi           #+#    #+#             */
/*   Updated: 2023/04/14 18:28:00 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pushingtob(t_list **sender, t_list **receiver)
{
	t_list	*tmp;
	t_list	*tmp1;

	tmp = *sender;
	tmp1 = tmp->next;
	*sender = tmp1;
	ft_lstadd_front(receiver, tmp);
	ft_printf("pb\n");
}

void	pushingtoa(t_list **sender, t_list **receiver)
{
	t_list	*tmp;
	t_list	*tmp1;

	tmp = *sender;
	tmp1 = tmp->next;
	*sender = tmp1;
	ft_lstadd_front(receiver, tmp);
	ft_printf("pa\n");
}

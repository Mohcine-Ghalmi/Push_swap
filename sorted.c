/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 21:06:22 by mghalmi           #+#    #+#             */
/*   Updated: 2023/04/14 23:21:18 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	issorted(t_list *stack)
{
	t_list	*tmp;
	int		count;

	count = 0;
	tmp = stack;
	while (tmp)
	{
		if (tmp->next == NULL)
			break ;
		if (tmp->content < tmp->next->content)
			count++;
		tmp = tmp->next;
	}
	if (++count == ft_lstsize(stack))
		exit(0);
}

int	issortedcheker(t_list *stack)
{
	t_list	*tmp;
	int		count;

	count = 0;
	tmp = stack;
	while (tmp)
	{
		if (tmp->next == NULL)
			break ;
		if (tmp->content < tmp->next->content)
			count++;
		tmp = tmp->next;
	}
	if (++count == ft_lstsize(stack))
		return (1);
	return (0);
}

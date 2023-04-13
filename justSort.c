/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   justSort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:55:15 by mghalmi           #+#    #+#             */
/*   Updated: 2023/04/13 14:49:01 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    justSort(t_list **stackA, t_list **stackB, int chunk)
{
	int add;
	
	add = chunk;
	while (*stackA)
	{
		if ((*stackA)->pos >= chunk)
			rotate(stackA, 'a');
		else
		{
			if ((*stackA)->pos >= (chunk - (add / 2)))
			{
				pushingToB(stackA, stackB);
				rotate(stackB, 'b');
			}
			else
				pushingToB(stackA, stackB);
		}
		if (ft_lstsize(*stackB) == chunk)
			chunk += add;
	}
}
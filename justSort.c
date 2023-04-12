/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   justSort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:55:15 by mghalmi           #+#    #+#             */
/*   Updated: 2023/04/12 20:55:48 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    justSort(t_list **stackA, t_list **stackB)
{
    while (ft_lstsize(*stackA) > 3)
	{
		minOnTop(stackA);
		pushingToB(stackA, stackB);
	}
	sorting3AndLess(*stackA);
	while (ft_lstsize(*stackB))
		pushingToA(stackB, stackA);
}
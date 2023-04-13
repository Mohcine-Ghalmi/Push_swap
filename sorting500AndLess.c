/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting500AndLess.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 20:12:18 by mghalmi           #+#    #+#             */
/*   Updated: 2023/04/13 14:50:18 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sorting500AndLess(t_list **stackA, t_list **stackB)
{
    int chunk;

	chunk = ft_lstsize(*stackA) / 9;
	justSort(stackA, stackB, chunk);
}
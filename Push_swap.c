/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:47:16 by mghalmi           #+#    #+#             */
/*   Updated: 2023/04/14 17:55:23 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	isSorted(t_list *stack)
{
	t_list *tmp;
	int count;

	count = 0;
	tmp = stack;
	while (tmp)
	{
		if (tmp->next == NULL)
			break;
		if (tmp->content < tmp->next->content)
			count++;
		tmp = tmp->next;
	}
	if (++count == ft_lstsize(stack))
		exit(0);
}

int main(int argc, char **argv)
{
    t_list *stackA;
	t_list *stackB;

	if (argc >= 2)
	{
		stackA = readingData(argv);
		stackB = NULL;
		isSorted(stackA);
		if (ft_lstsize(stackA) <= 3)
			sorting3AndLess(stackA);
		else if (ft_lstsize(stackA) <= 5)
			sorting5AndLess(&stackA, &stackB);
		else if (ft_lstsize(stackA) < 200)
			sorting100AndLess(&stackA, &stackB);
		else if (ft_lstsize(stackA) >= 200)
			sorting500AndLess(&stackA, &stackB);
		ft_lstclear(&stackA, NULL);
		ft_lstclear(&stackB, NULL);
	}else
		ft_printf("Error\n");
    return 0;
}

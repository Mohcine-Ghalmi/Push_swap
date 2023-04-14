/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:47:16 by mghalmi           #+#    #+#             */
/*   Updated: 2023/04/14 20:03:33 by mghalmi          ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	t_list	*stacka;
	t_list	*stackb;

	if (argc >= 2)
	{
		stacka = readingdata(argv);
		stackb = NULL;
		issorted(stacka);
		if (ft_lstsize(stacka) <= 3)
			sorting3andless(stacka);
		else if (ft_lstsize(stacka) <= 5)
			sorting5andless(&stacka, &stackb);
		else if (ft_lstsize(stacka) < 200)
			sorting100andless(&stacka, &stackb);
		else if (ft_lstsize(stacka) >= 200)
			sorting500andless(&stacka, &stackb);
		ft_lstclear(&stacka, NULL);
		ft_lstclear(&stackb, NULL);
	}
	else
		ft_printf("Error\n");
	return (0);
}

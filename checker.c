/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 20:18:38 by mghalmi           #+#    #+#             */
/*   Updated: 2023/04/16 17:12:49 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	checkinstra(t_list **stacka, t_list **stackb, char *str)
{
	if (ft_strncmp(str, "pa\n", 3) == 0)
		pushingtoacheker(stackb, stacka);
	else if (ft_strncmp(str, "pb\n", ft_strlen(str)) == 0)
		pushingtobcheker(stacka, stackb);
	else if (ft_strncmp(str, "sa\n", ft_strlen(str)) == 0)
		swaping(*stacka, 0);
	else if (ft_strncmp(str, "sb\n", ft_strlen(str)) == 0)
		swaping(*stackb, 0);
	else if (ft_strncmp(str, "ss\n", ft_strlen(str)) == 0)
		sscheker(*stacka, *stackb);
	else if (ft_strncmp(str, "ra\n", ft_strlen(str)) == 0)
		rotate(stacka, 0);
	else if (ft_strncmp(str, "rb\n", ft_strlen(str)) == 0)
		rotate(stackb, 0);
	else if (ft_strncmp(str, "rr\n", ft_strlen(str)) == 0)
		rrcheker(stacka, stackb);
	else if (ft_strncmp(str, "rra\n", ft_strlen(str)) == 0)
		reverserotate(stacka, 0);
	else if (ft_strncmp(str, "rrb\n", ft_strlen(str)) == 0)
		reverserotate(stackb, 0);
	else if (ft_strncmp(str, "rrr\n", ft_strlen(str)) == 0)
		rrrcheker(*stacka, *stackb);
}

int	main(int ac, char **argv)
{
	t_list	*stacka;
	t_list	*stackb;
	char	*str;

	if (ac >= 2)
	{
		stacka = readingdata(argv);
		stackb = NULL;
		str = get_next_line(0);
		while (str)
		{
			checkinstra(&stacka, &stackb, str);
			free(str);
			str = get_next_line(0);
		}
		if (issortedcheker(stacka) == 1 && ft_lstsize(stackb) == 0)
			ft_printf("OK\n");
		else
			ft_printf("KO\n");
		ft_lstclear(&stacka, NULL);
		ft_lstclear(&stackb, NULL);
		free(str);
	}
	return (0);
}

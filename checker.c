/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 20:18:38 by mghalmi           #+#    #+#             */
/*   Updated: 2023/04/14 21:55:23 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **argv)
{
	t_list	**stacka = NULL;
	t_list	**stackb = NULL;
	char *str;

	// **stacka = NULL;
	if (ac >= 2)
	{
		**stacka = *readingdata(argv);
		*stackb = NULL;
		str = get_next_line(0);
		while (str)
		{
			if (ft_strncmp(str, "pa\n", ft_strlen(str)))
				pushingtoa(stackb, stacka);
			else if (ft_strncmp(str, "pb\n", ft_strlen(str)))
				pushingtob(stacka, stackb);
			else if (ft_strncmp(str, "sa\n", ft_strlen(str)))
				swaping(*stacka, 'a');
			else if (ft_strncmp(str, "sb\n", ft_strlen(str)))
				swaping(*stackb, 'b');
			else if (ft_strncmp(str, "ss\n", ft_strlen(str)))
				ss(*stacka, *stackb);
			else if (ft_strncmp(str, "ra\n", ft_strlen(str)))
				rotate(stacka, 'a');
			else if (ft_strncmp(str, "rb\n", ft_strlen(str)))
				rotate(stackb, 'b');
			else if (ft_strncmp(str, "rr\n", ft_strlen(str)))
				rr(*stacka, *stackb);
			else if (ft_strncmp(str, "rra\n", ft_strlen(str)))
				reverserotate(stacka, 'a');
			else if (ft_strncmp(str, "rrb\n", ft_strlen(str)))
				reverserotate(stackb, 'b');
			else if (ft_strncmp(str, "rrr\n", ft_strlen(str)))
				rrr(*stacka, *stackb);
			free(str);
			str = get_next_line(0);
		}
		t_list *tmp;
		tmp = *stacka;
		
		while (tmp)
		{
			printf("vaue = %ld\n", tmp->content);
			tmp = tmp->next;
		}
		if (issortedcheker(*stacka) == 1)
			ft_printf("OK\n");
		else 
			ft_printf("KO\n");
		ft_lstclear(stacka, NULL);
		ft_lstclear(stackb, NULL);
		free(str);
	}
	return 0;
}
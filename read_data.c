/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_data.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 17:42:43 by mghalmi           #+#    #+#             */
/*   Updated: 2023/04/14 19:42:52 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	eroor(void)
{
	ft_printf("Error\n");
	exit(1);
}

void	check(char **splited)
{
	int		i;
	int		j;
	long	num1;
	long	num2;

	i = 0;
	while (splited[i])
	{
		j = i;
		num1 = ft_atoi(splited[i]);
		if (num1 < -2147483647 || num1 > 2147483647)
			eroor();
		while (splited[++j])
		{
			num2 = ft_atoi(splited[j]);
			if (num1 == num2)
				eroor();
		}
		i++;
	}
}

void	freeandcheck(char *join, char **split)
{
	free(join);
	check(split);
}

void	fillstack(t_list **stack, int i, char *split)
{
	ft_lstadd_back(stack, ft_lstnew(ft_atoi(split), i));
	free(split);
}

t_list	*readingdata(char **argv)
{
	int		i;
	char	**split;
	char	*join;
	t_list	*datastart;

	i = 1;
	datastart = NULL;
	join = NULL;
	while (argv[i])
		join = ft_strjoin(join, argv[i++], ' ');
	split = ft_split(join, ' ');
	if (!split)
	{
		free(join);
		return (NULL);
	}
	freeandcheck(join, split);
	i = -1;
	while (split[++i])
		fillstack(&datastart, i, split[i]);
	indexstack(&datastart);
	free(split);
	return (datastart);
}

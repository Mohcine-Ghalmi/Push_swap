/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_data.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleeps <sleeps@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 17:42:43 by mghalmi           #+#    #+#             */
/*   Updated: 2023/04/10 06:45:05 by sleeps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	check(char **splited)
{
	int i;
	int j;
	long num1;
	long num2;

	i = 0;
	while (splited[i])
	{
		j = i;
		num1 = ft_atoi(splited[i]);
		if (num1 < -2147483647 || num1 > 2147483647)
		{
			ft_printf("\033[0;31msize error\n");
			exit(1);
		}
		while (splited[++j])
		{
			num2 = ft_atoi(splited[j]);
			if (num1 == num2)
			{
				ft_printf("\033[0;31mduplicated value\n");
				exit(1);
			}
		}
		i++;
	}
}

t_list *readingData(char **argv)
{
	int i;
	char **split;
	char *join;
	t_list *dataStart;

	i = 1;
	dataStart = NULL;
	join = NULL;
	join = ft_strjoin("", argv[i++], ' ');
	if (!join)
    	return (NULL);
	while (argv[i])
		join = ft_strjoin(join, argv[i++], ' ');
	split = ft_split(join, ' ');
	if (!split)
	{
    	free(join);
    	return (NULL);
	}
	free(join);
	check(split);
	i = -1;
	while (split[++i])
	{
		ft_lstadd_back(&dataStart, ft_lstnew(ft_atoi(split[i]), i));
		free(split[i]);
	}
	free(split);
	return (dataStart);
}

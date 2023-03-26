/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_data.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 17:42:43 by mghalmi           #+#    #+#             */
/*   Updated: 2023/03/26 17:40:43 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	check(char **argv)
{
	int i;
	int j;

	i = 0;
	while (argv[i])
	{
		j = i;
		ft_atoi(argv[i]);
		while (argv[++j])
			if (ft_strncmp(argv[i], argv[j], ft_strlen(argv[j])) == 0)
			{
				ft_printf("\033[0;31mduplicated value\n");
				exit(0);
			}
		i++;
	}
}

int readingData(char **argv)
{
	int i;
	char **split;
	char *join;
	
	i = 1;
	join = ft_calloc(1, sizeof(char));
	while (argv[i])
		join = ft_strjoin(join, argv[i++], ' ');
	split = ft_split(join, ' ');
	check(split);
	i = 0;
	while (split[i])
		ft_printf("%d\n", ft_atoi(split[i++]));
	return (0);
}

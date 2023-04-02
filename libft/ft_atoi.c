/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:09:05 by mghalmi           #+#    #+#             */
/*   Updated: 2023/04/02 15:27:31 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atoi(const char *str)
{
	long	res;
	int		i;
	int		signe;

	res = 0;
	i = 0;
	signe = 1;
	while (str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r'
		|| str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			signe *= -1;
	if (!str[i])
		signe = 0;
	while (str[i] >= '0' && str[i] <= '9')
		res = res * 10 + str[i++] - '0';
	if (str[i] || signe == 0)
	{
		ft_printf("\033[0;31mreading error\n");
		exit(1);
	}
	return (signe * res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:10:25 by mghalmi           #+#    #+#             */
/*   Updated: 2023/03/28 00:51:13 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(long content, int pos)
{
	t_list	*new;

	new = (void *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->pos = pos;
	new->next = NULL;
	return (new);
}

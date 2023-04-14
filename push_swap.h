/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:50:31 by mghalmi           #+#    #+#             */
/*   Updated: 2023/04/14 21:31:12 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include "libft/libft.h"
# include "get_next_line/get_next_line.h"

t_list	*readingdata(char **argv);
void	swaping(t_list *stack, int stackAlpha);
void	ss(t_list *stackA, t_list *stackB);
void	pushingtob(t_list **sender, t_list **receiver);
void	pushingtoa(t_list **sender, t_list **receiver);
void	rotate(t_list **stack, int stackApha);
void	rr(t_list *stackA, t_list *stackB);
void	reverserotate(t_list **stack, int stackAlpha);
void	sorting3andless(t_list *stackA);
void	sorting5andless(t_list **stackA, t_list **stackB);
void	sorting100andless(t_list **stackA, t_list **stackB);
void	sorting500andless(t_list **stackA, t_list **stackB);
void	minontop(t_list **stack);
void	indexstack(t_list **stack);
void	sorting2(t_list *stackA);
void	justsort(t_list **stackA, t_list **stackB, int chunk);
void	justsortchunks(t_list **stackA, t_list **stackB, int chunk);
int		instra(t_list *stack, int pos);
void	ifpushing(long value1, t_list **stackB, t_list **stackA);
void	issorted(t_list *stack);
void	rrr(t_list *stackA, t_list *stackB);
int	issortedcheker(t_list *stack);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:50:31 by mghalmi           #+#    #+#             */
/*   Updated: 2023/04/11 16:02:05 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>
# include <fcntl.h>
# include <math.h>
# include "libft/libft.h"

t_list	*readingData(char **argv);
void	swaping(t_list *stack, int stackAlpha);
void	ss(t_list *stackA, t_list *stackB);
void	pushingToB(t_list **sender, t_list **receiver);
void	pushingToA(t_list **sender, t_list **receiver);
void	rotate(t_list *stack, int stackApha);
void	rr(t_list *stackA, t_list *stackB);
void    reverseRotate(t_list *stack, int stackAlpha);
void    sorting3AndLess(t_list *stackA);
void    sorting5AndLess(t_list **stackA, t_list **stackB);
void    sorting100AndLess(t_list **stackA, t_list **stackB);
void    sorting500AndLess(t_list **stackA, t_list **stackB);
void    minOnTop(t_list **stack);
void    indexStack(t_list **stack);

#endif

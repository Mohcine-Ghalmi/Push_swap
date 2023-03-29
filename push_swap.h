/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:50:31 by mghalmi           #+#    #+#             */
/*   Updated: 2023/03/28 17:42:29 by mghalmi          ###   ########.fr       */
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

int readingData(char **argv);
void	swaping(t_list *stack, int stackAlpha);
void	ss(t_list *stackA, t_list *stackB);
void	pushing(t_list *sender, t_list *receiver, int stackAlpha);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:47:16 by mghalmi           #+#    #+#             */
/*   Updated: 2023/04/05 16:15:40 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

int main(int argc, char **argv)
{
    t_list  *stackA;

    if (argc >= 2)
    {
        stackA = readingData(argv);
        // while (stackA)
        // {
        //     printf("value = %ld || position = %d\n", stackA->content, stackA->pos);
        //     stackA = stackA->next;
        // }
    }
    else
		  ft_printf("\033[0;31mless parameter\n");
    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting100AndLess.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 00:18:34 by mghalmi           #+#    #+#             */
/*   Updated: 2023/04/12 23:17:31 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	ft_get_pos(t_list *data, int red, int add, int *c, int *b)
{
	t_list *a = data;
	int i=0;
	int l=0;
	
	while (a)
	{
		if (a->pos == red)
			break ;
		a = a->next;
		i++;
	}
	a = data;
	while (a)
	{
		if (a->pos == add)
			break ;
		a = a->next;
		l++;
	}
	if (i > (ft_lstsize(data) / 2))
		*c = ft_lstsize(data) - i;
	else
		*c = i;
	if (l > (ft_lstsize(data) / 2))
		*b = ft_lstsize(data) - l;
	else
		*b = l;
}

void ft_small(t_list **stack, int *small, int *big)
{
	t_list *tmp;
	tmp = *stack;
	*small = 0;
	*big = 0;
	while (tmp)
	{
		if (tmp->pos > *big)
			*big = tmp->pos;
		tmp = tmp->next;
	}
	tmp = *stack;
	while (tmp)
	{
		if (tmp->pos > *small && tmp->pos != *big)
			*small = tmp->pos;
		tmp = tmp->next;
	}
}

int ft_pos(t_list **stack, int index)
{
	t_list *tmp;
	int count = 0;
	tmp = *stack;
	while (tmp)
	{
		if (tmp->pos == index)
			 break;
		count++;
		tmp = tmp->next;
	}
	return count;
}
void	indexOnTop(t_list **stackB, t_list **stackA, int index)
{
	int i;
	
	i = ft_pos(stackB, index);
	// printf("----%d\n",i);
	// printf("----%ld\n",(*stackB)->content);
	// printf("----%d\n",(*stackB)->pos);
	if (i > ft_lstsize(*stackB) / 2)
		while (i--)
			reverseRotate(stackB, 'b');
	else
		while (i++ < ft_lstsize(*stackB))
			rotate(stackB, 'b');
	pushingToA(stackB, stackA);
}

void    sorting100AndLess(t_list **stackA, t_list **stackB)
{
	int reDo;
	int add;
	int a;
	int b;
	reDo = (ft_lstsize(*stackA)) / 5;
	add = reDo;
	while (*stackA)
	{
		if ((*stackA)->pos >= reDo)
			rotate(stackA, 'a');
		else
		{
			if ((*stackA)->pos >= (reDo - (add / 2)))
			{
				pushingToB(stackA, stackB);
				rotate(stackB, 'b');
			}
			else
				pushingToB(stackA, stackB);
		}
		if (ft_lstsize(*stackB) == reDo)
			reDo += add;
	}
	while (stackB)
	{
		ft_small(stackB, &reDo, &add);
		ft_get_pos(*stackB, reDo,add, &a,&b);
		// a = ft_pos(stackB, reDo);
		// b = ft_pos(stackB, add);
		// if (a > ft_lstsize(*stackB) / 2)
		// 	a = ft_lstsize(*stackB) - a;
		// if (b > ft_lstsize(*stackB) / 2)
		// 	b = ft_lstsize(*stackB) - b;
		
		printf("====%d\n",a);
		printf("====%d\n",b);
		printf("====%d\n",reDo);
		printf("====%d\n",add);
		// exit(1);
		if (a <= b)
		{
			indexOnTop(stackB, stackA, reDo);
			indexOnTop(stackB, stackA, add);
		}else
		{
			indexOnTop(stackB, stackA, add);
			indexOnTop(stackB, stackA, reDo);
			swaping(*stackA, 'a');
		}
		t_list **h= stackA;
		while ((*h))
		{
			printf("---%ld\n",(*h)->content);
			(*h) = (*h)->next;
		}
	}
	
}

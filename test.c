#include "push_swap.h"

void	isSorted(t_list *stack)
{
	t_list *tmp;
	int count;

	count = 0;
	tmp = stack;
	while (tmp)
	{
		if (tmp->next == NULL)
			break;
		if (tmp->content < tmp->next->content)
			count++;
		tmp = tmp->next;
	}
	if (++count == ft_lstsize(stack))
	{
        ft_printf("\033[0;31mthe stack already sorted\n");
		return ;
	}
}

void	test(){system("leaks Push_swap");}

int main(int argc, char **argv)
{
	t_list *stackA;
	t_list *stackB;

	if (argc >= 2)
	{
		stackA = readingData(argv);
		stackB = NULL;
		isSorted(stackA);
		if (ft_lstsize(stackA) <= 3)
			sorting3AndLess(stackA);
		else if (ft_lstsize(stackA) <= 5)
			sorting5AndLess(&stackA, &stackB);
		else if (ft_lstsize(stackA) <= 100)
			sorting100AndLess(&stackA, &stackB);
		else if (ft_lstsize(stackA) <= 500)
			sorting500AndLess(&stackA, &stackB);
		else
			justSort(&stackA, &stackB);
		// puts("------------------------StackA-----------------------");
		// while (stackA)
		// {
		// 	printf("value == %ld || postion == %d\n", stackA->content, stackA->pos);
		// 	stackA = stackA->next;
		// }
		puts("------------------------StackB-----------------------");
		while (stackB)
		{
			printf("value == %ld || postion == %d\n", stackB->content, stackB->pos);
			stackB = stackB->next;
		}
		ft_lstclear(&stackA, NULL);
		ft_lstclear(&stackB, NULL);
	}else
		ft_printf("----idk fih----\n");
	// atexit(test)
	return (0);
}

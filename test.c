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
		exit(0);
	}
}

int main(int argc, char **argv)
{
	t_list *stackA;
	t_list *stackB;

	if (argc >= 2)
	{
		stackA = readingData(argv);
		stackB = NULL;
		isSorted(stackA);
		if (ft_lstsize(stackA) == 3)
			sorting3(stackA);
		else if (ft_lstsize(stackA) <= 5)
			sorting5AndLess(&stackA, &stackB);
		// puts("-----------------------------stackA----------------------");
		// while (stackA)
		// {
		// 	printf("value == %ld || position == %d\n", stackA->content, stackA->pos);
		// 	stackA = stackA->next;
		// }
	}else
		ft_printf("----idk fih----\n");
	return (0);
}

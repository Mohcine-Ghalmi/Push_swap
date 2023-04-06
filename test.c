#include "push_swap.h"

int main(int argc, char **argv)
{
	t_list *stackA;
	t_list *stackB;

	if (argc >= 2)
	{
		stackA = readingData(argv);
		stackB = NULL;
		if (ft_lstsize(stackA) == 3)
			sorting3(stackA);
		if (ft_lstsize(stackA) <= 5)
			sorting5AndLess(&stackA, &stackB);
		puts("-----------------------------stackA----------------------");
		while (stackA)
		{
			printf("value == %ld || position == %d\n", stackA->content, stackA->pos);
			stackA = stackA->next;
		}
	}else
		ft_printf("----idk fih----\n");
	return (0);
}

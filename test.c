#include "push_swap.h"

int main(int argc, char **argv)
{
	t_list *stackA;
	t_list *stackB;
	t_list *tmpA;
	// t_list *tmpB;

	if (argc >= 2)
	{
		stackA = readingData(argv);
		tmpA = stackA;
		stackB = NULL;
		puts("------------------------stackA-------------------------");
		while (stackA)
		{
			printf("value = %ld || position = %d\n", stackA->content, stackA->pos);
			stackA = stackA->next;
		}
		// puts("------------------------stackB-------------------------");
		// pushingToB(&tmpA, &stackB);
		// pushingToB(&tmpA, &stackB);
		// pushingToB(&tmpA, &stackB);
		// // swaping(stackB, 'a');
		// tmpB = stackB;
		// while (stackB)
		// {
		// 	printf("value = %ld || position = %d\n", stackB->content, stackB->pos);
		// 	stackB = stackB->next;
		// }
		// puts("------------------------stackB-------------------------");
		// stackB = tmpB;
		// rotate(stackB, 'b');
		// while (stackB)
		// {
		// 	printf("value = %ld || position = %d\n", stackB->content, stackB->pos);
		// 	stackB = stackB->next;
		// }
		// tmpB = stackB;
		puts("------------------------stackA-------------------------");
		// pushingToA(&tmpB, &tmpA);
		// pushingToA(&tmpB, &tmpA);
		// rotate(tmpA, 'a');
		// swaping(tmpA, 'a');
		reverseRotate(tmpA, 'a');
		while (tmpA)
		{
			printf("value = %ld || position = %d\n", tmpA->content, tmpA->pos);
			tmpA = tmpA->next;
		}
	}else
		ft_printf("----idk fih----\n");
	return (0);
}

#include "push_swap.h"

void	check(char **splited)
{
	int i;
	int j;
	long num1;
	long num2;

	i = 0;
	while (splited[i])
	{
		j = i;
		num1 = ft_atoi(splited[i]);
		if (num1 < -2147483648 || num1 > 2147483647)
		{
			ft_printf("\033[0;31msize error\n");
			exit(1);
		}
		while (splited[++j])
		{
			num2 = ft_atoi(splited[j]);
			if (num1 == num2)
			{
				ft_printf("\033[0;31mduplicated value\n");
				exit(1);
			}
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	int i;
	char **split;
	char *join;
	t_list *dataStart;
	t_list *stackB;
	t_list *tmp;

	i = 1;
	join = ft_calloc(1, sizeof(char));
	if (argc >= 2)
	{
		dataStart = NULL;
		stackB = NULL;
		while (argv[i])
			join = ft_strjoin(join, argv[i++], ' ');
		split = ft_split(join, ' ');
		check(split);
		i = -1;
		while (split[++i])
			ft_lstadd_back(&dataStart, ft_lstnew(ft_atoi(split[i]), i));
		i = 0;
		puts("satckA");
		tmp = dataStart;
		while (dataStart)
		{
			printf("value = %ld || position =  %d\n",dataStart->content, dataStart->pos);
			dataStart = dataStart->next;
		}
		puts("stackB");
		// ft_lstadd_front(&stackB, ft_lstnew(tmp->content, tmp->pos));
		// tmp = tmp->next;
		// pushingToB(&tmp, &stackB, 'b');
		pushingToB(&tmp, &stackB, 'b');
		// swaping(tmp, 'a');
		while (stackB)
		{
			printf("value = %ld || position =  %d\n", stackB->content, stackB->pos);
			stackB = stackB->next;
		}
		puts("stackA");
		while (tmp)
		{
			printf("value = %ld || position =  %d\n", tmp->content, tmp->pos);
			tmp = tmp->next;
		 }
	}else
		ft_printf("----idk fih----\n");
	return (0);
}

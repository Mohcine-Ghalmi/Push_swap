#include "push_swap.h"

void	check(char **argv)
{
	int i;
	int j;

	i = 0;
	while (argv[i])
	{
		j = i;
		ft_atoi(argv[i]);
		while (argv[++j])
			if (ft_strncmp(argv[i], argv[j], ft_strlen(argv[j])) == 0)
			{
				ft_printf("\033[0;31mduplicated value\n");
				exit(0);
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
	
	i = 1;
	join = ft_calloc(1, sizeof(char));
	if (argc >= 2)
	{
		dataStart = NULL;
		while (argv[i])
			join = ft_strjoin(join, argv[i++], ' ');
		split = ft_split(join, ' ');
		check(split);
		i = -1;
		while (split[++i])
			ft_lstadd_back(&dataStart, ft_lstnew(ft_atoi(split[i]), i));
		i = 0;
		while (dataStart)
		{
			printf("value = %ld || position =  %d\n", dataStart->content, dataStart->pos);
			dataStart = dataStart->next;
		}
	}else
		ft_printf("----idk fih----\n");
	return (0);
}

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
	
	i = 1;
	if (argc >= 2)
	{
		while (argv[i])
			join = ft_strjoin(join, argv[i++]);
		split = ft_split(join, ' ');
		check(split);
		i = 0;
		while (split[i])
			ft_printf("%d\n", ft_atoi(split[i++]));
	}
	ft_printf("\033[0;31mless parameter\n");
}

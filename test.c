#include "push_swap.h"

int main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc > 1)
	{
		while (argv[i])
			ft_atoi(argv[i++]);
		i = 1;
		while (argv[i])
			ft_printf("%d\n", ft_atoi(argv[i++]));
	}
}

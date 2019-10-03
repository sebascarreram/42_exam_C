#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int index;

	if (argc != 4)
	{
		ft_putchar('\n');
		return (0);
	}
	else
	{
		// 2nd and 3rd have be a letter, NOT two or more letter
		if (argv[2][1] != '\0' || argv[3][1] != '\0')
		{
			ft_putchar('\n');
			return (0);
		}
		index = 0;
		while (argv[1][index] != '\0')
		{
			if (argv[1][index] == argv[2][0])
				argv[1][index] = argv[3][0];
			ft_putchar(argv[1][index]);
			index++;
		}
		ft_putchar('\n');
	}
	return (0);
}

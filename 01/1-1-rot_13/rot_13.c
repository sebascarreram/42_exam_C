#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int index;
	int i;

	if (argc != 2)
		ft_putchar('\n');
	else
	{
		i = 1;
		index = 0;
		while (i < argc)
		{
			while (argv[i][index] != '\0')
			{
				if ((argv[i][index] >= 65 && argv[i][index] <= 77) || (argv[i][index] >= 97 && argv[i][index] <= 109))
					ft_putchar(argv[i][index] += 13);
				else if ((argv[i][index] >= 78 && argv[i][index] <= 90) || (argv[i][index] >= 110 && argv[i][index] <= 122))
					ft_putchar(argv[i][index] -= 13);
				else
					ft_putchar(argv[i][index]);
				index++;
			}
			i++;
		}
		ft_putchar('\n');
	}
	return (0);
}

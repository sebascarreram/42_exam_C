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
		index = 0;
		i = 1;
		while (i < argc)
		{
			while (argv[i][index] != '\0')
			{
				if (argv[i][index] >= 65 && argv[i][index] <= 90)
					ft_putchar(122 + argv[i][index] - 90);
				else if (argv[i][index] >= 97 && argv[i][index] <= 122)
					ft_putchar(90 + argv[i][index] - 122);
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

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main (int argc, char *argv[])
{
	int index;
	int i;
	
	if (argc != 2)
		ft_putchar('\n');
	else
	{	i = 1;
		while (i < argc)
		{
			index  = 0;
			while (argv[i][index] != '\0')
			{
				if (argv[i][index] == 90)
					ft_putchar('A');
				else if (argv[i][index] == 122)
					ft_putchar('a');
				else if ((argv[i][index] >= 65 && argv[i][index] <= 89) || (argv[i][index] >= 97 && argv[i][index] <= 121))
					ft_putchar(argv[i][index] + 1);
				else
					ft_putchar(argv[i][index]);
				index++;
			}
			i++;
		}
		ft_putchar('\n');
	}
}

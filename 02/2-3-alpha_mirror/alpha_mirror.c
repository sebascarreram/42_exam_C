#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int index;
	if (argc == 2)
	{
		index = 0;
		while (argv[1][index] != '\0')
		{
			if (argv[1][index] >= 'a' && argv[1][index] <= 'z')
				ft_putchar(219 - argv[1][index]);
			else if (argv[1][index] >= 'A' && argv[1][index] <= 'Z')
				ft_putchar(155 - argv[1][index]);
			else
				ft_putchar(argv[1][index]);
			index++;
		}	
	}
	ft_putchar('\n');
	return (0);
}

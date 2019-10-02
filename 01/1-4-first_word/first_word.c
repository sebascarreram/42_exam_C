#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int index;
	//int i;
	
	if (argc != 2)
		write (1, "\n",1);
	else if (argc == 2)
	{
		index = 0;
		while (argv[1][index] && (argv[1][index] == ' ' || argv[1][index] == '\t'))
			index++;
		while (argv[1][index] != '\0' && (argv[1][index] != ' ' && argv[1][index] != '\t'))
		{	
			ft_putchar(argv[1][index]);
			index++;
		}
		ft_putchar('\n');	
	}
	else
		ft_putchar('\n');
	return (0);
}

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int leng;

	if (argc != 2)
		ft_putchar('\n');
	else if (argc == 2)
	{	
		leng = 0;
		while (argv[1][leng] != '\0')
			leng++;
		while (leng--)
			ft_putchar(argv[1][leng]);
		ft_putchar('\n');
	}
	return (0);
}

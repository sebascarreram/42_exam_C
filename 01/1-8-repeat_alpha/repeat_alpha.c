#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	is_alpha(char *str)
{
	int leng;
	
	if (*str >= 65 && *str <= 90)
		leng = *str - 65 + 1;
	else if (*str >= 97 && *str <= 122)
		leng = *str - 97 + 1;
	else
		leng = 1;
	return (leng);
}

int	main(int argc, char *argv[])
{
	int index;
	int leng;

	if (argc != 2)
		ft_putchar('\n');
	else if (argc == 2)
	{
		index = 0;
		while (argv[1][index])
		{
			leng = is_alpha(&argv[1][index]);
			while (leng)
			{
				ft_putchar(argv[1][index]);
				leng--;
			}
			index++;
		}
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	return (0);
}

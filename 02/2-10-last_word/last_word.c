#include <unistd.h>
//#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int index;
	
	index = 0;
	while (str[index])
		index++;
	return (index);
}

int	is_blank(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int	main(int argc, char *argv[])
{
	int leng;
	
	leng = ft_strlen(argv[1]) - 1;
	if (argc == 2)
	{
		while (is_blank(argv[1][leng]))
			leng--;
		while (argv[1][leng] && !is_blank(argv[1][leng]))
			leng--;
		leng++;
		while (argv[1][leng] && !is_blank(argv[1][leng]))
			ft_putchar(argv[1][leng++]);
		
	}
	ft_putchar('\n');	
	return (0);
}

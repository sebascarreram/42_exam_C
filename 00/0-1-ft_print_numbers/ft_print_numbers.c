#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_numbers(void)
{
	int index;
	
	index = '/';
	while (++index < ':')
		ft_putchar(index);
	ft_putchar('\n');
}

int 	main()
{
	ft_print_numbers();
	return (0);	
}

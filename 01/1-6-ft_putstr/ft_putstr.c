#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int index;
	
	index = -1;
	while (str[++index])
		ft_putchar(str[index]);
	ft_putchar('\n');
}

int main()
{
	char name[] = "sebas";
	
	printf("My name is: %s\n", name);
	return (0);
}

#include <stdio.h>

int	ft_strlen(char *str)
{
	int index;

	index = -1;
	while (str[++index])
		;
	return (index);
}

int	main()
{
	char name[] = "sebast";
	printf("%i\n", ft_strlen(name));
	return (0);
}

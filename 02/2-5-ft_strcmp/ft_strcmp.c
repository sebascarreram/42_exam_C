#include <stdio.h>

int	ft_strlen(char *str)
{
	int index;
	
	index = -1;
	while (str[++index])
		;
	return (index);
}

int	ft_strcmp(char *s1, char *s2)
{
	int leng1;
	int leng2;
	int index;

	leng1 = ft_strlen(s1);
	leng2 = ft_strlen(s2);
	index = 0;
	while (index < leng1 && index < leng2)
	{
		if (s1[index] == s2[index])
			index++;
		else
			return (s1[index] - s2[index]);
	}
	if (leng1 < leng2)
		return (leng1 - leng2);
	else if (leng1 > leng2)
		return (leng1 - leng2);
	else
		return (0);
}

int	main()
{
	char name1[] = "bfb";
	char name2[] = "gfg";
	printf("%i\n", ft_strcmp(name1, name2));
	return (0);
}

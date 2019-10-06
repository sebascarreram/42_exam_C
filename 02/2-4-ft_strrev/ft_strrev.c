#include <stdio.h>

int	ft_strlen(char *str)
{
	int index;
	
	index = -1;
	while (str[++index])
		;
	return (index);	
}

char    *ft_strrev(char *str)
{
	int index;
	int leng;
	char temp;
	
	leng = ft_strlen(str);
	index = -1;
	//printf("%i\n", leng);
	while (index++ < --leng)
	{
		temp = str[index];
		str[index] = str[leng];
		str[leng] = temp;
	}
	return (str);
}

int	main()
{
	char name[] = "know";
	printf("%s\n", ft_strrev(name));
	return (0);
}

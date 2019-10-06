#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int index;
	
	index = -1;
	while (str[++index])
		;
	return (index);
}

char	*ft_strdup(char *src)
{
	int leng;
	char *str;
		
	leng = ft_strlen(src);
	str = (char*)malloc((leng + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[leng] = '\0';
	while (--leng >= 0)
		str[leng] = src[leng];
	return (str);
}

int	main()
{
	char name[] = "sebastian";
	printf("%s\n", ft_strdup(name));
	return (0);
}

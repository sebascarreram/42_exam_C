#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int index;

	index = -1;
	while (s2[++index] != '\0')
		s1[index] = s2[index];
	s1[index] = '\0';
	return (s1);
}

int	main()
{
	char name[] = "sebastian";
	char lastname[] = "carrera";
	
	printf("Name: %s\n", name);
	printf("Lastname: %s\n", lastname);
	ft_strcpy(lastname, name);
	printf("Copied...\n");
	printf("Lastname: %s\n", lastname);
	return (0);
}

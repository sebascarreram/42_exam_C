#include <stdio.h>

int ft_atoi(const char *str)
{
	int index;
	int sign;
	long result;

	sign = 1;
	result = 0;
	index = 0;
	while (str[index])
	{
		if (str[index] == 32 || (str[index] >= 9 && str[index] <= 13))
			index++;
		if (str[index] == '-' && (str[index + 1] >= '0' && str[index + 1] <= '9'))
		{
			sign = -1;
			index++;
		}
		while (str[index] >= '0' && str[index] <= '9')
		{
			result = (result * 10) + str[index] - '0';
			index++;
		}
		index++;
	}
	return (sign * (int)result);
}

int main()
{
	char a[] = " + -  - \n\n\v\f\r\t 5234AAAgreg+hr&9sth"; // 52349
	printf("%d\n", ft_atoi(a));
	return (0);
}

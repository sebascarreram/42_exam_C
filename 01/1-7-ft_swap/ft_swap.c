#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int	main()
{
	int number1;
	int number2;
	
	number1 = 5;
	number2 = 2;
	printf("Number1: %i\n", number1);
	printf("Number2: %i\n", number2);
	ft_swap(&number2, &number1);
	printf("Swaaaap...!\n");
	printf("Number1: %i\n", number1);
	printf("Number2: %i\n", number2);
	return (0);
}

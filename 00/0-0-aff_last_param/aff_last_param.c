#include <unistd.h>
#include <stdio.h>
int main(int argc, char **argv)
{	
	int index;

	index = -1;
	if (argc < 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	while (argv[argc - 1][++index])
		write (1, &argv[argc - 1][index], 1);
	write (1, "\n", 1);
	return (0);
}

#include <unistd.h>

int main(int argc, char **argv)
{
	int index;
	
	index = -1;
	if (argc == 1)
	{
		write(1, "a\n", 2);
		return (0);
	}
	while (argv[1][++index])
	{
		if (argv[1][index] == 'a')
		{
			write (1, "a\n", 2);
			return (0);
		}
	}
	write (1, "\n", 1);
	return (0);
}

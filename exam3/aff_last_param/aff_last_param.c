#include <unistd.h>

int	main(int argc, char **argv)
{
	int 	j;
	char	*str;

	j = 0;
	str = argv[argc - 1];
	if (argc > 1)
	{	
		while(str[j])
		{
			write(1, &str[j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
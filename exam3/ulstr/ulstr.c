#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0;
	char *str = argv[1];
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while(str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		else if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}
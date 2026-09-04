#include <unistd.h>

int in_other_str(char *str, char c)
{
	int i= 0;
	while(str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return(0);
}

int	in_str(char *str, char c, int pos)
{
	int i = 0;
	while(i < pos)
	{
		if (str[i] == c)
			return(1);
		i++;
	}
	return(0);
}

void ft_union(char *s1, char *s2)
{
	int i;
	while(s1[i])
	{
		if (!in_str(s1, s1[i], i))
			write(1, &s1[i], 1);
		i++;
	}
	i = 0;
	while(s2[i])
	{
		if (!in_other_str(s1, s2[i]))
		{
			if (!in_str(s2, s2[i], i))
				write(1, &s2[i], 1);
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return(0);
}
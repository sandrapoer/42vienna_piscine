char	*ft_strrev(char *str)
{
	char	*helper;
	int		i = 0;
	int		j = 0;

	helper = str;
	while(helper[i])
		i++;
	i --;
	while(i >= 0)
	{
		str[j] = helper[i];
		i--;
		j++;
	}
	return (str);
}

#include <stdio.h>
int	main(void)
{
	char str[] = "Hello";
	printf("%s\n", ft_strrev(str));
	return (0);
}
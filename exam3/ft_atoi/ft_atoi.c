int	ft_atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	
	if (str[i] == '-')
	{
		sign = -sign;
		i++;
	}
	if (str[i] == '+')
		i++;
	while(str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			result = result * 10 + (str[i] - '0');
		else
			break;
		i++;
	}
	result *= sign;
	return(result);
}

#include <stdio.h>
int main(void)
{
	char *str = "     +123vdfs123";
	printf("%d\n", ft_atoi(str));
	return (0);
}
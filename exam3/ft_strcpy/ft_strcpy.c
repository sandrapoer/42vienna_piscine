char	*ft_strcpy(char	*s1, char *s2)
{
	int i;

	i = 0;
	while(s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

#include <stdio.h>
int	main(void)
{
	char dest[100] = "Hellooooooo";
	char src[100] = "Goodbye";

	printf("%s\n", ft_strcpy(dest, src));
	return (0);
}
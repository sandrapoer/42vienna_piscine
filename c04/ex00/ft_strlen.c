// header

//include <stdio.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}

/*
int     main(void)
{
        char    *str = "string";

        printf("%d", ft_strlen(str));
        return(0);
}
*/

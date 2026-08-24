//header

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		write(1, &str[c], 1)
		c++;
	}	
}

/*
int     main(void)
{
        char    str[7] = "string";

        ft_putstr(str);
        return(0);
}
*/

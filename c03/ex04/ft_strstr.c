/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 13:05:22 by spoernba          #+#    #+#             */
/*   Updated: 2026/08/24 15:17:42 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j] && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	if (to_find[0] == '\0')
		return (&str[i]);
	return (NULL);
}

/*
int main(void)
{
    char    str[]="Dog, cat, mouse.";
    char    to_find[]="cat";

    printf("strstr does this:\n");
    printf("%s", strstr(str, to_find));
    printf("\nMy function does this:\n");
    printf("%s", ft_strstr(str, to_find));
    return(0);
}
*/

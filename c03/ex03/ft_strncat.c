/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 12:05:15 by spoernba          #+#    #+#             */
/*   Updated: 2026/08/23 12:24:44 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int main(void)
{
    char    dest1[100]="This sentence ";
    char    dest2[100]="This sentence ";
    char    src[]="should continue.";
	unsigned int	n = 8;

    printf("strcat returns this:\n");
    printf("%s", strncat(dest1, src, n));
    printf("\nMy function should do the same:\n");
    printf("%s", ft_strncat(dest2, src, n));
    return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 21:07:31 by spoernba          #+#    #+#             */
/*   Updated: 2026/08/23 11:55:13 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
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
	char	dest1[100]="This sentence ";
	char	dest2[100]="This sentence ";
	char	src[]="should continue.";

	printf("strcat returns this:\n");
	printf("%s", strcat(dest1, src));
	printf("\nMy function should do the same:\n");
	printf("%s", ft_strcat(dest2, src));
	return (0);
}
*/

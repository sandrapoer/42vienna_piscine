/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 09:26:54 by spoernba          #+#    #+#             */
/*   Updated: 2026/08/27 11:07:35 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}

char	*ft_strdup(char *src)
{
	char	*new_s;
	int 	i;

	new_s = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (new_s == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		new_s[i] = src[i];
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}

int	main(int argc, char **argv)
{
	char	*dup;

	if (argc != 2)
		return (1);
	printf("strdup output:\n");
	printf("%s\n", strdup(argv[1]));
	printf("\nMy function's output:\n");
	dup = ft_strdup(argv[1]);
	printf("%s\n", dup);
	free(dup);
	dup = NULL;
	return(0);
}

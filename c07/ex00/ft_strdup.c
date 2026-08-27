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

char	*ft_strdup(char *src)
{
	char	*new_s;

	new_s = malloc(
	return (new_s);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return;
	printf("strdup output:\n");
	printf("%s\n", strdup(argv[1]));
	printf("\nMy function's output:\n");
	printf("%s\n", ft_strdup(argv[1]));
	return(0);
}

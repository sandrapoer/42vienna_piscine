/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 15:52:37 by spoernba          #+#    #+#             */
/*   Updated: 2026/08/31 12:25:00 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*numbers;
	int	c;
	int	i;

	i = 0;
	c = min;
	if (min >= max)
		return (NULL);
	while (c < max)
		c++;
	numbers = malloc(c * sizeof(int));
	if (numbers == NULL)
		return (NULL);
	while (min < max)
	{
		numbers[i] = min;
		min++;
		i++;
	}
	return (numbers);
}

/*
int	main(int argc, char **argv)
{
	int *dup = ft_range((atoi(argv[1])), (atoi(argv[2])));
	int	i = 0;
	if (argc != 3)
		return (1);
	while (i < (atoi(argv[2])) - (atoi(argv[1])))
	{
		printf("%d%s", dup[i], " ");
		i++;
	}
	free(dup);
	dup = NULL;
	return (0);
}
*/
